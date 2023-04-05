CC = g++
CFLAGS = -std=c++11 -Wall -Werror -pedantic
LFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

all: NBody

NBody: main.o
	$(CC) $^ $(LFLAGS) -o $@

main.o: main.cpp Universe.h CelestialBody.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f NBody *.o
