#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/if.h>
#include <linux/if_tun.h>
#include <unistd.h>
#include <inttypes.h>

#define TUN_DEVICE "/dev/net/tun"
#define TUN_NAME "oaitun_ue1"

#define PACKET_SIZE 30
#define HEADER_SIZE 24
#define PFI_OFFSET 0
#define QFI_OFFSET 7
#define TYPE_OFFSET 15

typedef struct nas_header_s {
    uint8_t pfi;
    uint8_t qfi;
    uint8_t type;
} nas_header_t;

void print_packet(const char *packet, int length) {
    for (int i = 0; i < length; i++) {
        printf("%02x ", (unsigned char)packet[i]);
        if ((i + 1) % 16 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}


int main(){

    int tun_fd;
    struct ifreq ifr;
    char buffer[PACKET_SIZE];
    nas_header_t header;

    // Open TUN
    if ((tun_fd = open(TUN_DEVICE, O_RDWR)) < 0){
        perror("Failed to open TUN device");
    }

    memset(&ifr, 0, sizeof(ifr));
    strncpy(ifr.ifr_name, TUN_NAME, IFNAMSIZ);
    
    ifr.ifr_flags = IFF_TUN | IFF_NO_PI;
/*
    if (ioctl(tun_fd, TUNSETIFF, &ifr) < 0){
        perror("ioctl(TUNSETIFF)");
        close(tun_fd);
        return 1;
    }*/
    

    header.pfi = 1;
    header.qfi = 2;
    header.type = 3;

    printf("----- Selected values -----\n");
    printf("PFI: %d, ", header.pfi);
    printf("QFI: %d, ", header.qfi);
    printf("Type: %d\n", header.type);

    memset(buffer, 0, PACKET_SIZE - sizeof(header));

    char packet[PACKET_SIZE];
    memcpy(packet, &header, sizeof(header));
    memcpy(packet + sizeof(header), buffer, PACKET_SIZE - sizeof(header));    
    printf("----- Created Packet -----\n");
    print_packet(packet, PACKET_SIZE);
    printf("\n");

    // Write the combined packet (header + data) to the TUN interface
    if (write(tun_fd, packet, PACKET_SIZE) < 0) {
        perror("Writing to TUN interface");
        close(tun_fd);
        return 1;
    } else printf("Packet sent successfully\n");

    return 0;
}