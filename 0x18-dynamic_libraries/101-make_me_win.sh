#!/bin/bash
gcc -fPIC -shared -o win.so
LD_PRELOAD=./win.so ./gm 9 8 10 24 75 9
