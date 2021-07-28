CXX = c++
CXXFLAGS = -std=c++11 -g -Wall -Wextra -stdlib=libc++
OUT = tester
ALL = src/main.o src/optparser.o src/datatypes.o
LDFLAGS = -lc++