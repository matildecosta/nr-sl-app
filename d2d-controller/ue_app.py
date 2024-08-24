from scapy.all import IP, TCP, Raw, sendp, Ether

location = "36.9482,-25.0191"

broadcast = "255.255.255.255"

user = "A"

def main():
    print("UE App started...")

    # Calculate actual location
    actual_location = location

    # Build packet with location
    ip_packet = IP(dst=broadcast, src="10.0.0.1")
    tcp_packet = TCP(dport=50000, sport=50001, seq=100, ack=101, flags="S")

    # Payload is the actual location
    payload = Raw(user.encode() + b":" + location.encode())
    full_packet = ip_packet/tcp_packet/payload

    # Encapsulate in an Ethernet frame
    ether_frame = Ether()/full_packet

    # Send the packet over the oaitun_ue1 interface
    sendp(ether_frame, iface="oaitun_ue1")

    # Print the packet details
    print("Packet Details:")
    ether_frame.show()  # This prints the packet structure

    print("\nPacket in Hex Format:")
    print(bytes(ether_frame).hex())  # This prints the packet in hexadecimal format

    return 0

if __name__ == "__main__":
    main()