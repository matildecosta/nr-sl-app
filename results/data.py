import pandas as pd
import matplotlib.pyplot as plt

    ### UDP ###
df = pd.read_csv('udp_results.csv')
# packet loss vs bandwidth
plt.figure()
plt.plot(df['Bandwidth (Kbps)'].to_numpy(), df['Packet Loss (%)'].to_numpy(), marker='o')
plt.title('Bandwidth vs Packet Loss, using UDP')
#plt.text(905,3,'packet size = 64 bytes', fontsize=10, color='black')
plt.xlabel('Bandwidth (Kbps)')
plt.ylabel('Packet Loss (%)')
plt.grid(True)
#plt.show()
plt.savefig('bw_pl_udp.png')

# jitter vs bandwidth
plt.figure()
plt.plot(df['Bandwidth (Kbps)'].to_numpy(), df['Jitter (ms)'].to_numpy(), marker='o', color='orange')
plt.title('Bandwidth vs Jitter, using UDP')
#plt.text(905,1.25,'packet size = 64 bytes', fontsize=10, color='black')
plt.xlabel('Bandwidth (Kbps)')
plt.ylabel('Jitter (ms)')
plt.grid(True)
#plt.show()
plt.savefig('bw_jit_udp.png')

# jitter vs bandwidth
plt.figure()
plt.plot(df['IPG (us)'].to_numpy(), df['Packet Loss (%)'].to_numpy(), marker='o', color='orange')
plt.title('IPG vs Packet Loss, using UDP')
#plt.text(905,1.25,'packet size = 64 bytes', fontsize=10, color='black')
plt.xlabel('IPG (us)')
plt.ylabel('Packet loss (%)')
plt.grid(True)
#plt.show()
plt.savefig('ipg_pl_udp.png')

    ### TCP ###
df = pd.read_csv('tcp_results.csv')
# bandwidth vs Forced bandwidth
plt.figure()
plt.plot(df['Forced Bandwidth (Kbps)'].to_numpy(), df['Bandwidth (Kbps)'].to_numpy(), marker='o')
plt.title('Forced Bandwidth vs Actual Bandwidth, using TCP')
plt.xlabel('Forced Bandwidth (Kbps)')
plt.ylabel('Actual Bandwidth (Kbps)')
plt.grid(True)
#plt.show()
plt.savefig('fbw_bw_tcp.png')

print("Done!")