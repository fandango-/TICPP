# From Thinking in C++, 2nd Edition
# At http://www.BruceEckel.com
# (c) Bruce Eckel 1999
# Copyright notice in Copyright.txt
# Automatically-generated MAKEFILE 
# For examples in directory C11
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
	Referrors \
	Pointerref \
	Charref

Referrors: Referrors.o
	$(CPP) $(OFLAG) Referrors Referrors.o

Pointerref: Pointerref.o
	$(CPP) $(OFLAG) Pointerref Pointerref.o

Charref: Charref.o
	$(CPP) $(OFLAG) Charref Charref.o

clean:
	rm -f *~ *.o Referrors Pointerref Charref

Referrors.o: Referrors.cpp
Pointerref.o: Pointerref.cpp
Charref.o: Charref.cpp
