import socket
import threading
import time

location = "36.9482,-25.0191"
p2p_ip = '10.0.0.1'
broadcast_ip = '10.0.0.255'
self_ip = '10.0.0.2'
p2p_port = 50002    # port of the listening socket on the other user
self_port = 50001   # port of the listening socket on this user
source_port = 50002 # port of the sending socket
interface_name = "oaitun_ue2"

user = "B"
time_interval = 1  # Send every 1 second

type="TCP"

def send_packet():
    print("[S] Send packet thread started")
    
    if type == "TCP":
        while True:
            try:
                sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
                sock.bind((self_ip, source_port))
                sock.connect((p2p_ip, p2p_port))
                print(f"[S] Connected to {p2p_ip}:{p2p_port}")

                while True:
                    message = user + ":" + location
                    sock.sendall(message.encode())
                    print(f"[S] Sent: {message}")
                    time.sleep(time_interval)

            except Exception as e:
                print(f"[S] Connection failed: {e}. Trying again in 2 seconds...")
                time.sleep(2)
            finally:
                sock.close()


    else:   # UDP
        sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        sock.setsockopt(socket.SOL_SOCKET, socket.SO_BROADCAST, 1)  # To allow broadcasting
        sock.bind((self_ip, source_port))

        while True:
            try:
                message = user + ":" + location
                sock.sendto(message.encode(), (broadcast_ip, p2p_port))
                # sock.sendto(message.encode(), (p2p_ip, p2p_port)) # To send individually
                print(f"[S] Sent: {message}")
                time.sleep(time_interval)
            except Exception as e:
                print(f"[S] Error sending packet: {e}")

def listening_socket():
    print("[L] Listening socket thread started")

    if type == "TCP":
        server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        server_socket.bind((self_ip,self_port))
        server_socket.listen(1)
        print("[L] User", user, "is listening for connections on port", self_port)

        while True:
            print("[L] Waiting for a connection...")
            connection, client_address = server_socket.accept()
            print(f"[L] Connection from {client_address}")

            try:
                while True:
                    # Receive the data in chunks
                    data = connection.recv(1024)
                    if data:
                        print(f"[L] Received: {data.decode()}")
                    else:
                        break
            finally:
                print(f"[L] Closing connection with {client_address}")
                connection.close()
    else:
        # UDP
        server_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        server_socket.setsockopt(socket.SOL_SOCKET, socket.SO_BINDTODEVICE, interface_name.encode())
        server_socket.bind(('0.0.0.0', self_port))
        print(f"[L] User {user} is listening for packets on port {self_port} and interface {interface_name}")

        while True:
            #print("[L] Waiting for a packet...")
            data, addr = server_socket.recvfrom(1024)
            if data:
                print(f"[L] Received from {addr}: {data.decode()}")
            else:
                break


if __name__ == "__main__":
    print("UE App starting for user", user)
    print(f"Using {type} protocol.")
    if type == "UDP":
        print(f"UDP allows broadcasting.")
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
