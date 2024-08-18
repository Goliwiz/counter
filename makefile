# Variable
CC=g++


# Default goal
.DEFAULT_GOAL := all

all: bingoSquare

bingoSquare: bingoSquare.o test.o
	$(CC) -o $@ $^

bingoSquare.o: bingoSquare.cc bingoSquare.h
	$(CC) -c $<

test.o: test.cc bingoSquare.h
	$(CC) -c $<