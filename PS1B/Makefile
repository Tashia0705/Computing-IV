CC = g++ 
CFLAGS = -std=c++11 -Wall -Werror -pedantic 
LFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

all: PhotoMagic

PhotoMagic: PhotoMagic.o FibLFSR.o 
	$(CC) -o $@ PhotoMagic.o FibLFSR.o $(LFLAGS)

PhotoMagic.o: PhotoMagic.cpp FibLFSR.h 
	$(CC) $(CFLAGS) -c PhotoMagic.cpp -o PhotoMagic.o 

FibLFSR.o: FibLFSR.cpp FibLFSR.h 
	$(CC) $(CFLAGS) -c FibLFSR.cpp -o FibLFSR.o 

clean: 
	rm -f PhotoMagic *.o 


