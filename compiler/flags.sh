#!/bin/bash
gcc -E hello.c -o preprocessor.i
gcc -S hello.c -o compiller.s
gcc -c hello.c -o assembler.o
gcc hello.c -o linker
