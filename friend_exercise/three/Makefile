CC=g++
CFLAGS= 

all: main

main: main.o Point3d.o Vector3d.o
	gcc main.o Point3d.o Vector3d.o -o main

main.o: main.cpp Point3d.h Vector3d.h
	$(CC) $(CFLAGS) -c main.cpp

Point3d.o: Point3d.cpp Point3d.h Vector3d.h
	$(CC) $(CFLAGS) -c Point3d.cpp	

Vector3d.o: Vector3d.cpp Vector3d.h # Not sure whether this is correct
	$(CC) $(CFLAGS) -c Vector3d.cpp

clean: 
	rm *.o main



