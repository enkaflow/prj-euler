#!/bin/bash
g++ -std=c++11 -I/home/Kevin/peuler/lib/BigNumber/src -L/home/Kevin/peuler/lib/BigNumber/lib -l:BigNumber.o main.cpp -o LargeSum
