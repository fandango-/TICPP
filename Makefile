# Master makefile for Thinking in C++, 2nd Ed. by Bruce Eckel
# at http://www.BruceEckel.com
# Compiles all the code in the book
# Copyright notice in Copyright.txt

all:
	cd C02; make
	cd C04; make
	cd C06; make
	cd C07; make
	cd C09; make
	cd C11; make
	cd C12; make

clean:
	cd C02; make clean
	cd C04; make clean
	cd C06; make clean
	cd C07; make clean
	cd C09; make clean
	cd C11; make clean
	cd C12; make clean
