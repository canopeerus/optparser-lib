CC = clang++-mp-11
CXXFLAGS = -std=c++11 -stdlib=libc++ -g -Wall -Wextra
OUT = tester
ALL = src/main.o src/optparser.o src/datatypes.o
PREFIX = /usr/local
BIN = ${PREFIX}/bin
