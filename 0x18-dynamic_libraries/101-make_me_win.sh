#!/bin/bash
export LD_PRELOAD=./custom_rand.so
./gm 9 8 10 24 75 9
