import socket
import threading
import time

location = "36.9482,-25.0191"
user_a_ip = '10.0.0.1'
user_a_port = 50000

user = "B"
time_interval = 1  # Send every 1 second
print_info = False

def send_packet():
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    try:
        sock.connect((user_a_ip, user_a_port))
        print(f"Connected to {user_a_ip}:{user_a_port}")

        while True:
            message = user + ":" + location
            sock.sendall(message.encode())
            print(f"Sent: {message}")
            time.sleep(time_interval)

    finally:
        sock.close()
        
"""        # Build packet with location
        ip_packet = IP(dst=broadcast, src=addr)
        tcp_packet = TCP(dport=50001, sport=50000, seq=100, ack=101, flags="S")

        # Payload is the actual location
        payload = Raw(user.encode() + b":" + location.encode())
        full_packet = ip_packet/tcp_packet/payload

        # Encapsulate in an Ethernet frame
        ether_frame = Ether()/full_packet

        # Send the packet over the oaitun_ue1 interface
        sendp(ether_frame, iface=intf)

        if print_info:     # Print the packet details
            print("Packet Details:")
            ether_frame.show()  # packet structure

            print("\nPacket in Hex Format:")
            print(bytes(ether_frame).hex())  # Packet in hexadecimal format """

def listening_socket():
    # Create a TCP/IP socket
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_socket.bind('10.0.0.2',50001)
    server_socket.listen(1)
    print("User", user, "is listening for connections on port 50001...")

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
                    break
        finally:
            print(f"Closing connection with {client_address}")
            connection.close()

if __name__ == "__main__":
    print("UE App started for user ", user)

    # Create threads for sending and listening
    send_thread = threading.Thread(target=send_packet)
    listen_thread = threading.Thread(target=listening_socket)

    # Start both threads
    send_thread.start()
    listen_thread.start()

    # Join the threads to ensure they run concurrently
    send_thread.join()
    listen_thread.join()
