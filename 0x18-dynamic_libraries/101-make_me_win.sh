#!/bin/bash
gcc -fPIC -shared -o win.so rand.c
LD_PRELOAD=./win.so ./gm
