#!/bin/bash
wget -P /tmp https://github.com/alx-tools/0x18.c/raw/refs/heads/master/gm
export LD_PRELOAD=/tmp/nrandom.so
