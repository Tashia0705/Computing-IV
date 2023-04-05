CC = g++ 
CFLAGS = -std=c++11 -Wall -Werror -pedantic 
LFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

all: ED

ED: ED.o main.o 
	$(CC) -o $@ ED.o main.o $(LFLAGS)

main.o: main.cpp ED.h 
	$(CC) $(CFLAGS) -c main.cpp -o main.o 

ED.o: ED.cpp
	$(CC) $(CFLAGS) -c ED.cpp -o ED.o 

clean: 
	rm -f ED *.o