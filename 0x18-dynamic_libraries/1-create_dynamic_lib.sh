#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o libholberton.so *.o
