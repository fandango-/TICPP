# From Thinking in C++, 2nd Edition
# At http://www.BruceEckel.com
# (c) Bruce Eckel 1999
# Copyright notice in Copyright.txt
# Automatically-generated MAKEFILE 
# For examples in directory C04
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
	Dynamicalloc \
	Structsize

Dynamicalloc: Dynamicalloc.o
	$(CPP) $(OFLAG) Dynamicalloc Dynamicalloc.o

Structsize: Structsize.o
	$(CPP) $(OFLAG) Structsize Structsize.o

clean:
	rm -f *~ *.o Dynamicalloc Structsize

Dynamicalloc.o: Dynamicalloc.cpp
Structsize.o: Structsize.cpp
