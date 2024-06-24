#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h> /* superset of previous */
#include <net/if.h>
#include <sys/ioctl.h>
#include <linux/if_tun.h>
#include <arpa/inet.h>
#include <linux/if_packet.h>
#include <netinet/ether.h> 

#include "inttypes.h"
#include <linux/if.h>

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

int open_existing_tun_interface(const char *tun_name) {
    char tun_device_path[IFNAMSIZ + 20];
    snprintf(tun_device_path, sizeof(tun_device_path), "/dev/net/tun");

    // Open the TUN device file
    int fd = open(tun_device_path, O_RDWR);
    if (fd < 0) {
        perror("Opening /dev/net/tun");
        return fd;
    }

    return fd;
}


int main(){
    const char *tun_name = "oaitun_ue1";
    int sockfd;
    char buffer[PACKET_SIZE];
    nas_header_t header;

     // Create a raw socket
    if ((sockfd = socket(AF_PACKET, SOCK_RAW, IPPROTO_RAW)) < 0) {
        perror("Creating raw socket");
        return 1;
    }
    
        // Get the interface index of the TUN interface
    struct ifreq ifr;
    memset(&ifr, 0, sizeof(ifr));
    strncpy(ifr.ifr_name, tun_name, IFNAMSIZ - 1);
    if (ioctl(sockfd, SIOCGIFINDEX, &ifr) < 0) {
        perror("SIOCGIFINDEX");
        close(sockfd);
        return 1;
    }

    printf("TUN interface %s opened\n", tun_name);

        // Prepare dummy packet
    header.pfi = 1;
    header.qfi = 2;
    header.type = 3;

    printf("----- Selected values -----\n");
    printf("PFI: %d, ", header.pfi);
    printf("QFI: %d, ", header.qfi);
    printf("Type: %d\n", header.type);

        // Build packet
    char packet[PACKET_SIZE];
    memset(buffer, 0, PACKET_SIZE - sizeof(header));
    memcpy(packet, &header, sizeof(header));
    memcpy(packet + sizeof(header), buffer, PACKET_SIZE - sizeof(header));    
    printf("----- Created Packet -----\n");
    print_packet(packet, PACKET_SIZE);
    printf("\n");

        // Send the packet to the TUN interface
    struct sockaddr_ll tun_addr;
    memset(&tun_addr, 0, sizeof(tun_addr));
    tun_addr.sll_family = AF_PACKET;
    tun_addr.sll_protocol = htons(ETH_P_ALL); // Use the appropriate protocol
    tun_addr.sll_ifindex = ifr.ifr_ifindex;
    tun_addr.sll_halen = ETH_ALEN; // Ethernet address length, if applicable

    // Send the packet to the TUN interface
    int nwrite = sendto(sockfd, packet, sizeof(packet), 0, (struct sockaddr *)&tun_addr, sizeof(tun_addr));
    if (nwrite < 0) {
        perror("Sending packet");
        close(sockfd);
        return 1;
    }
    printf("----- Packet Sent with %d bytes -----\n", nwrite);

        // Close the TUN interface
    //close(tun_fd);
    return 0;
}