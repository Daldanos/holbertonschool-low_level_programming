#!/bin/bash

# Compile .c files to .o
gcc -c *.c

# Create library from all .o

ar rcs liball.a *.o

# Cleans .o

rm -f *.o
