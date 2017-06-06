# Master makefile for Thinking in C++, 2nd Ed. by Bruce Eckel
# at http://www.BruceEckel.com
# Compiles all the code in the book
# Copyright notice in Copyright.txt

all:
	cd C02; make
	cd C04; make

clean:
	cd C02; make clean
	cd C04; make clean