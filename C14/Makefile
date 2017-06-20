# From Thinking in C++, 2nd Edition
# At http://www.BruceEckel.com
# (c) Bruce Eckel 1999
# Copyright notice in Copyright.txt
# Automatically-generated MAKEFILE 
# For examples in directory C14
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
	Threelevel \
	BusinessTraveler

Threelevel: Threelevel.o
	$(CPP) $(OFLAG) Threelevel Threelevel.o

BusinessTraveler: BusinessTraveler.o
	$(CPP) $(OFLAG) BusinessTraveler BusinessTraveler.o

clean:
	rm -f *~ *.orig *.o Threelevel BusinessTraveler

Threelevel.o: Threelevel.cpp
BusinessTraveler.o: BusinessTraveler.cpp
