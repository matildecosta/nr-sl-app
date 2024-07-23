#!/bin/sh

cd ../openairinterface5g/cmake_targets/ran_build/build
sudo ./nr-uesoftmodem --rfsim -O ~/nr-sl-app/sl_ue1.conf --sl-mode 2 --sa --rfsimulator.serveraddr 192.168.81.233 --rfsimulator.serverport 4048
