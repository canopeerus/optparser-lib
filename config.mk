CXX = c++
CXXFLAGS = -std=c++11 -g -Wall -Wextra
OUT = tester
ALL = src/main.o src/optparser.o src/shapes/ArgumentConfig.o src/shapes/ArgumentOption.o src/shapes/ArgumentCommand.o
LDFLAGS = -lc++