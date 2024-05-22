#!/bin/sh

cd ../openairinterface5g/cmake_targets/ran_build/build
sudo ./nr-uesoftmodem --rfsim -O ~/OAI_NR_SL/nr-sl-app/sl_syncref.conf --sl-mode 2 --sa --sync-ref --rfsimulator.serveraddr server --rfsimulator.serverport 4048
