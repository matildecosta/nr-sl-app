#!/bin/sh

cd ~/OAI_NR_SL/openairinterface5g/cmake_targets/ran_build/build
sudo -S gdb --args ./nr-uesoftmodem -O ~/OAI_NR_SL/sl_ue1.conf --sa -E --sl-mode 2 --usrp-args "type=b200,master_clock_rate=46.08e6,clock_source=external,enable_gps=true" --ue-txgain 0 --ue-rxgain 100 --ue-max-power 0 --thread-pool -1,-1,-1,-1
