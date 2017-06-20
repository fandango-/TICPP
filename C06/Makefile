# From Thinking in C++, 2nd Edition
# At http://www.BruceEckel.com
# (c) Bruce Eckel 1999
# Copyright notice in Copyright.txt
# Automatically-generated MAKEFILE 
# For examples in directory C06
# using the gcc compiler
# Note: does not make files that will 
# not compile with this compiler
# Invoke with: make

CPP = g++
OFLAG = -o
.SUFFIXES : .o .cpp .c
.cpp.o :
	$(CPP) $(CPPFLAGS) -c $<
.c.o :
	$(CPP) $(CPPFLAGS) -c $<

all: \
	Simple1 \
	Simple2 \
	Simple3

Simple1: Simple1.o
	$(CPP) $(OFLAG) Simple1 Simple1.o

Simple2: Simple2.o
	$(CPP) $(OFLAG) Simple2 Simple2.o

Simple3: Simple3.o
	$(CPP) $(OFLAG) Simple3 Simple3.o

clean:
	rm -f *~ *.orig *.o Simple1 Simple2 Simple3

Simple1.o: Simple1.cpp
Simple2.o: Simple2.cpp
Simple3.o: Simple3.cpp
