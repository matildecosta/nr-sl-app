#!/bin/sh

cd ~/OAI_NR_SL/openairinterface5g/cmake_targets/ran_build/build
sudo ./nr-uesoftmodem --rfsim -O ~/OAI_NR_SL/nr-sl-app/sl_ue1.conf --sl-mode 2 --sa --rfsimulator.serveraddr 172.21.19.73 --rfsimulator.serverport 4048
