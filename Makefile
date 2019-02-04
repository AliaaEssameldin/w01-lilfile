# Makefile for Workshop 1 of 15-441
CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -lpthread

lilfile: main.o wcounter.o encode.o

wordcount.o: wordcount.h wordcount.c
	$(CC) $(CFLAGS) -c wordcount.c

encode.o: wordcount.o encode.c encode.h
	$(CC) $(CFLAGS) -c encode.c

main.o: main.c wordcount.h encode.h
	$(CC) $(CFLAGS) -c main.c

test: 
	python lilfile_test.py

clean: 
