#!/bin/bash
sudo ifconfig oip0 10.0.0.1
sudo ifconfig oip0 hw ether 00:00:00:00:00:01
sudo ip neigh add 10.0.0.2 lladdr 00:00:00:00:00:02 dev oip0 nud permanent
sudo iptables -t mangle -F
sudo iptables -t nat -F
sudo iptables -A POSTROUTING -t mangle -o oip0 -d 10.0.0.2 -j MARK --set-mark 4
