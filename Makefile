# Makefile for compiling a C++ source file into an executable and running it

# Compiler and flags
CXX := g++
CXXFLAGS := -std=c++11 -Wall

# Source files
SRCS := $(wildcard *.cpp)

# Target executables (one for each source file)
TARGETS := $(patsubst %.cpp,%,$(SRCS))

# Default target
all: $(TARGETS)

# Rule to build the target executables and run them
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<
	./$@

# Clean rule
clean:
	rm -f $(TARGETS)

.PHONY: all clean
