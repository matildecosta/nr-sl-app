import subprocess
import sys

def ping (addr, intf):
    command = ['ping', addr, '-I', intf, '-c', '1']
    try:
        output = subprocess.check_output(command, stderr=subprocess.STDOUT, universal_newlines=True)
        print("Ping sucessful")
    except subprocess.CalledProcessError as e:
        print(f"Ping failed with return code {e.returncode}")
        print(e.output)


def main():
    if len(sys.argv) != 2:
        print("Usage: 'python3 ping.py Sync' or")
        print("       'python3 ping.py UE' or")
    # works for SyncRef
    type = sys.argv[1]
    if type == "Sync":
        address = '10.0.0.2'
        interface = 'oaitun_ue1'
    elif type == "UE":
        address = '10.0.0.1'
        interface = 'oaitun_ue2'
    else:
        print("Usage: 'python3 ping.py Sync' or")
        print("       'python3 ping.py UE' or")

    while True:
        ping(address, interface)

if __name__ == "__main__":
    main()