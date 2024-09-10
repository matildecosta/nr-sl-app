import socket
import threading
import time
from scapy.all import IP, TCP, Raw, sendp, Ether

location = "36.9482,-25.0191"
broadcast = "255.255.255.255"
user = "B"
addr = "10.0.0.2"
intf = "oaitun_ue2"
time_interval = 1  # Send every 1 second
print_info = False

def send_packet():
    while True:
        # Build packet with location
        ip_packet = IP(dst=broadcast, src=addr)
        tcp_packet = TCP(dport=50000, sport=50001, seq=100, ack=101, flags="S")

        # Payload is the actual location
        payload = Raw(user.encode() + b":" + location.encode())
        full_packet = ip_packet/tcp_packet/payload

        # Encapsulate in an Ethernet frame
        ether_frame = Ether()/full_packet

        # Send the packet over the interface
        sendp(ether_frame, iface=intf)

        if print_info:     # Print the packet details
            print("Packet Details:")
            ether_frame.show()  # packet structure

            print("\nPacket in Hex Format:")
            print(bytes(ether_frame).hex())  # Packet in hexadecimal format

        time.sleep(time_interval)

def create_listening_socket():
    # Create a TCP/IP socket
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    # Bind the socket to the port
    server_address = ('', 50001)  # '' means listening on all available interfaces
    print(f"Starting up listening on port {server_address[1]}")
    server_socket.bind(server_address)

    # Listen for incoming connections
    server_socket.listen(1)

    while True:
        print("Waiting for a connection...")
        connection, client_address = server_socket.accept()
        print(f"Connection from {client_address}")

        try:
            while True:
                # Receive the data in chunks
                data = connection.recv(1024)
                if data:
                    print(f"Received: {data.decode()}")
                else:
                    print("No more data from", client_address)
                    break
        except Exception as e:
            print(f"Error: {e}")
        finally:
            # Connection closes here only when there's no more data or an error occurs
            print(f"Closing connection with {client_address}")
            connection.close()

if __name__ == "__main__":
    print("UE App started for user ", user, " with addr", addr, " on interface ", intf)

    # Create threads for sending and listening
    sender_thread = threading.Thread(target=send_packet)
    listener_thread = threading.Thread(target=create_listening_socket)

    # Start both threads
    sender_thread.start()
    listener_thread.start()

    # Join the threads to ensure they run concurrently
    sender_thread.join()
    listener_thread.join()
