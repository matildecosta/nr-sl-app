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

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <fstream>

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


int main(int argc, char* argv[]){

    char buffer[PACKET_SIZE];
    nas_header_t header;
    int ifindex = argv[1];

    int sockfd = socket(AF_PACKET, SOCK_DGRAM, htons(ETH_P_ALL));

    struct sockaddr_ll SendSockAddr;
    SendSockAddr.sll_family   = AF_PACKET;
    SendSockAddr.sll_halen    = ETH_ALEN;
    SendSockAddr.sll_ifindex  = ifindex;
    SendSockAddr.sll_protocol = htons(ETH_P_ALL);
    SendSockAddr.sll_hatype   = 0;
    SendSockAddr.sll_pkttype  = 0;

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

    sendto(sockfd, packet, sizeof(packet));

    return 0;
}