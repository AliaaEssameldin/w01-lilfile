# Makefile for Workshop 1 of 15-441
CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -lpthread

lilfile: main.o wcounter.o encoder.o

wcounter.o: wcounter.h wcounter.c
	$(CC) $(CFLAGS) -c wcounter.c

encoder.o: wcounter.o encoder.c encoder.h
	$(CC) $(CFLAGS) -c encoder.c

main.o: main.c wcounter.h encoder.h
	$(CC) $(CFLAGS) -c main.c

test: 
	python lilfile_test.py

clean: 
