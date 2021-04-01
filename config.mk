CC = cc
CFLAGS = -std=c99 -g -Wall -Wextra
OUT = tester
ALL = src/main.o src/optparser.o src/vector.o
PREFIX = /usr/local
BIN = ${PREFIX}/bin
