CC = g++ 
CFLAGS = -std=c++17 -Wall -Werror -pedantic
LFLAGS = -lsfml-system -lsfml-window -lsfml-graphics

all: Triangle 

Triangle: Triangle.o TFractal.o
	$(CC) -o $@ Triangle.o TFractal.o $(LFLAGS)

TFractal.o: TFractal.cpp Triangle.h 
	$(CC) $(CFLAGS) -c TFractal.cpp -o TFractal.o 

Triangle.o: Triangle.cpp
	$(CC) $(CFLAGS) -c Triangle.cpp -o Triangle.o

clean:
	rm -f Triangle *.o



