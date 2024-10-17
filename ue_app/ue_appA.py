import socket
import threading
import time
import sqlite3

from fastapi import FastAPI, Request
from fastapi.staticfiles import StaticFiles
from fastapi.responses import HTMLResponse, JSONResponse
from fastapi.templating import Jinja2Templates
from pydantic import BaseModel
import json
import threading
import uvicorn
import mapboxgl

import sys
import signal

location = "36.9470,-25.0180"
p2p_ip = '10.0.0.2'
broadcast_ip = '10.0.0.255'
self_ip = '10.0.0.1'
p2p_port = 50001    # port of the listening socket on the other user
self_port = 50002   # port of the listening socket on this user
source_port = 50001 # port of the sending socket
interface_name = "oaitun_ue1"

user = "A"
time_interval = 1  # Send every 1 second

type="UDP"

app = FastAPI()
app.mount("/static", StaticFiles(directory="static"), name="static")
templates = Jinja2Templates(directory="templates")

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
                    store_data(message)
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
                store_data(message)
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
                    data = connection.recv(1024)
                    if data:
                        print(f"[L] Received: {data.decode()}")
                        store_data(data.decode())           
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
            data, addr = server_socket.recvfrom(1024)
            if data:
                print(f"[L] Received from {addr}: {data.decode()}")
                store_data(data.decode())
            else:
                break

def setup_database():
        # Connect or create database
    print("[DB] Setting up database...")
    db = sqlite3.connect('locations.db')
    cursor = db.cursor()

        # Create table if it doesn't exist
    cursor.execute('''
                   CREATE TABLE IF NOT EXISTS location_data (
                   id INTEGER PRIMARY KEY AUTOINCREMENT,
                   user_id TEXT,
                   timestamp DATETIME DEFAULT CURRENT_TIMESTAMP,
                   latitude REAL,
                   longitude REAL
                   )
                   ''')
    db.commit()
    db.close()
    print("[DB] Database setup complete.")

def store_data(message):
    db = sqlite3.connect('locations.db')
    cursor = db.cursor()
    
    # Extract the user and location from the message
    user, location = message.split(':')
    latitude, longitude = location.split(',')

    cursor.execute('''
                     INSERT INTO location_data (user_id, latitude, longitude)
                        VALUES (?, ?, ?)
                        ''', (user, latitude, longitude))
    db.commit()
    db.close()
    print(f"[DB] Data stored in database for user {user} at location {location}")

# Initialize Mapbox map
@app.get("/", response_class=HTMLResponse)
def get_map(request:Request):
    return templates.TemplateResponse("index.html", {
        "request": request,
    })

@app.get("/locations")
def get_location():
    db = sqlite3.connect('locations.db')
    cursor  = db.cursor()
    cursor.execute('''
                   SELECT user_id, latitude, longitude, MAX(timestamp) as last_timestamp
                   FROM location_data
                   GROUP BY user_id
                    ''')
    data = cursor.fetchall()
    db.close()

    locations = {}
    for row in data:
        user_id, latitude, longitude, _ = row
        locations[user_id] = {
            "latitude": latitude,
            "longitude": longitude
        }

    return JSONResponse(content=locations)

def run_uvicorn():
    config = uvicorn.Config("ue_appA:app", host="0.0.0.0", port=8000, reload=True)
    server = uvicorn.Server(config)

    def signal_handler(sig, frame):
        print("Received signal to terminate.")
        server.should_exit = True
        sys.exit(0)
    
    signal.signal(signal.SIGINT, signal_handler)
    signal.signal(signal.SIGTERM, signal_handler)

    server.run()

if __name__ == "__main__":
    print("UE App starting for user", user)
    print(f"Using {type} protocol.")
    if type == "UDP":
        print(f"UDP allows broadcasting.")
    time.sleep(2)

    # Setup the database
    setup_database()

    # Create threads for sending and listening
    send_thread = threading.Thread(target=send_packet)
    listen_thread = threading.Thread(target=listening_socket)

    # Start both threads
    send_thread.start()
    listen_thread.start()

    # run the server for the map
    run_uvicorn()

    # Join the threads to ensure they run concurrently
    send_thread.join()
    listen_thread.join()

