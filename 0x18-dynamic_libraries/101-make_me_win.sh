#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/alx-tools/0x18.c/refs/heads/master/101-md5_gm
export LD_PRELOAD=/tmp/nrandom.so
