# From Thinking in C++, 2nd Edition
# At http://www.BruceEckel.com
# (c) Bruce Eckel 1999
# Copyright notice in Copyright.txt
# Automatically-generated MAKEFILE 
# For examples in directory C15
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
	Shape \
	Shapepure \
	Shapepass

Shape: Shape.o
	$(CPP) $(OFLAG) Shape Shape.o

Shapepure: Shapepure.o
	$(CPP) $(OFLAG) Shapepure Shapepure.o

Shapepass: Shapepass.o
	$(CPP) $(OFLAG) Shapepass Shapepass.o

clean:
	rm -f *~ *.orig *.o Shape Shapepure Shapepass

Shape.o: Shape.cpp
Shapepure.o: Shapepure.cpp
Shapepass.o: Shapepass.cpp
