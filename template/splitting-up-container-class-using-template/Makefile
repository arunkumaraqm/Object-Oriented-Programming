CC=g++
CFLAGS= 

all: main

main: main.cc array.cc array.h
	g++ $(CFLAGS) main.cc array.cc -o main

run: all
	./main < inputf.in > outputf.in

clean: 
	rm *.o main



