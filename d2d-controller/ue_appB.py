import socket
import threading
import time

location = "36.9482,-25.0191"
user_a_ip = '10.0.0.1'
broadcast_ip = '10.0.0.255'
user_a_port = 50002
self_port = 50001
interface_name= 'oaitun_ue2'

user = "B"
time_interval = 1  # Send every 1 second

type="TCP"

def send_packet():
    print("Send packet thread started")

    if type == "TCP":
        sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        sock.setsockopt(socket.SOL_SOCKET, socket.SO_BINDTODEVICE, interface_name.encode())
    else:
        sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        sock.setsockopt(socket.SOL_SOCKET, socket.SO_BROADCAST, 1)
        sock.setsockopt(socket.SOL_SOCKET, socket.SO_BINDTODEVICE, interface_name.encode())
    
    if type == "TCP":
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
    else:
       # UDP
        while True:
            try:
                message = user + ":" + location
                sock.sendto(message.encode(), (broadcast_ip, user_a_port))
                print(f"Sent: {message}")
                time.sleep(time_interval)
            except Exception as e:
                print(f"Error sending packet: {e}") 

def listening_socket():
    print("Listening socket thread started")

    if type == "TCP":
        server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        server_socket.setsockopt(socket.SOL_SOCKET, socket.SO_BINDTODEVICE, interface_name.encode())
        server_socket.bind(('10.0.0.2',self_port))
        server_socket.listen(1)
        print("User", user, "is listening for connections on port", self_port)

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
    else:
        # UDP
        server_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        server_socket.setsockopt(socket.SOL_SOCKET, socket.SO_BINDTODEVICE, interface_name.encode())
        server_socket.bind(('0.0.0.0', self_port))
        print("User", user, "is listening for connections on port", self_port)

        while True:
            print("Waiting for a packet...")
            data, addr = server_socket.recvfrom(1024)
            if data:
                print(f"Received from {addr}: {data.decode()}")
            else:
                break


if __name__ == "__main__":
    print("UE App starting for user", user)
    print(f"Using {type} protocol.")
    time.sleep(2)

    # Create threads for sending and listening
    send_thread = threading.Thread(target=send_packet)
    listen_thread = threading.Thread(target=listening_socket)

    # Start both threads
    send_thread.start()
    listen_thread.start()

    # Join the threads to ensure they run concurrently
    send_thread.join()
    listen_thread.join()
