#!/bin/bash
gcc -Werror -Wall -Wextra -pedantic *.c
ar rc liball.a *.o
ranlib liball.a
