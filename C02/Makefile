# From Thinking in C++, 2nd Edition
# At http://www.BruceEckel.com
# (c) Bruce Eckel 1999
# Copyright notice in Copyright.txt
# Automatically-generated MAKEFILE 
# For examples in directory C02
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
	Countwords \
	Fillvector

Countwords: Countwords.o
	$(CPP) $(OFLAG) Countwords Countwords.o

Fillvector: Fillvector.o
	$(CPP) $(OFLAG) Fillvector Fillvector.o

clean:
	rm -f *~ *.o Countwords Fillvector

Countwords.o: Countwords.cpp
Fillvector.o: Fillvector.cpp
