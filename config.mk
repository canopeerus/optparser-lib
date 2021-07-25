CXX = clang++-mp-11
CXXFLAGS = -std=c++11 -g -Wall -Wextra
OUT = tester
ALL = src/main.o src/optparser.o src/datatypes.o
LDFLAGS = -v