import os
import fcntl
import struct
import socket

# Constants for TUN device
TUNSETIFF = 0x400454ca
IFF_TUN = 0x0001
IFF_NO_PI = 0x1000

# Define the TUN interface name and packet size
TUN_DEVICE = "/dev/net/tun"
TUN_NAME = "oaitun_ue1"
PACKET_SIZE = 30
HEADER_SIZE = 24
PFI_OFFSET = 0
QFI_OFFSET = 7
TYPE_OFFSET = 15

def print_packet(packet):
    for i in range(len(packet)):
        print(f"{packet[i]:02x} ", end="")
        if (i + 1) % 16 == 0:
            print()
    print()

def open_existing_tun_interface(tun_name):
    tun_device_path = "/dev/net/tun"
    # Open the TUN device file
    fd = os.open(tun_device_path, os.O_RDWR)
    ifr = struct.pack('16sH', tun_name.encode('utf-8'), IFF_TUN | IFF_NO_PI)
    fcntl.ioctl(fd, TUNSETIFF, ifr)
    return fd

def main():
    tun_name = "oaitun_ue1"
    buffer = bytearray(PACKET_SIZE)
    header = {'pfi': 1, 'qfi': 2, 'type': 3}

    # Create a raw socket
    sockfd = socket.socket(socket.AF_PACKET, socket.SOCK_RAW, socket.htons(0x0800))
    
    # Get the interface index of the TUN interface
    ifr = struct.pack('16sH', tun_name.encode('utf-8'), 0)
    ifr = fcntl.ioctl(sockfd, 0x8933, ifr)  # SIOCGIFINDEX
    ifindex = struct.unpack('16sH', ifr)[1]

    print(f"TUN interface {tun_name} opened")

    # Prepare dummy packet
    print("----- Selected values -----")
    print(f"PFI: {header['pfi']}, QFI: {header['qfi']}, Type: {header['type']}")

    # Build packet
    packet = struct.pack('BBB', header['pfi'], header['qfi'], header['type']) + buffer[:PACKET_SIZE - 3]
    
    print("----- Created Packet -----")
    print_packet(packet)
    print()

    # Send the packet to the TUN interface
    tun_addr = struct.pack('HHH8sH', socket.AF_PACKET, socket.htons(0x0800), ifindex, b'\x00'*8, 0)
    nwrite = sockfd.sendto(packet, (tun_name, 0))

    if nwrite < 0:
        print(f"Error sending packet: {os.strerror(nwrite)}")
        return 1
    print(f"----- Packet Sent with {nwrite} bytes -----")

    return 0

if __name__ == "__main__":
    main()
