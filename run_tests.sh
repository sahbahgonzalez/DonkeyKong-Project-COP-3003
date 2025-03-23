#!/bin/bash
g++ -o test test.cpp
./test && echo "Tests passed!" || echo "Tests failed!"
