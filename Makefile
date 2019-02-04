# Makefile for Workshop 1 of 15-441
CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -lpthread

lilfile: main.o wcounter.o encoder.o

wordcount.o: wordcount.h wordcount.c
	$(CC) $(CFLAGS) -c wordcount.c

encoder.o: wordcount.o encoder.c encoder.h
	$(CC) $(CFLAGS) -c encoder.c

main.o: main.c wordcount.h encoder.h
	$(CC) $(CFLAGS) -c main.c

test: 
	python lilfile_test.py

clean: 
