#!/bin/sh

cd ../openairinterface5g/cmake_targets/ran_build/build
sudo -S ./nr-uesoftmodem -O ~/nr-sl-app/sl_syncref.conf --sa -E --sl-mode 2 --sync-ref --usrp-args "type=b200,master_clock_rate=46.08e6,clock_source=external,time_source=external" --ue-txgain 0 --ue-rxgain 100 --ue-max-power 0 --thread-pool -1,-1,-1,-1
