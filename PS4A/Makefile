CC = g++ 
CFLAGS = -std=c++11 -Wall -Werror -pedantic 
BOOST = -lboost_unit_test_framework

all: ps4a

ps4a: CircularBuffer.o test.o
	$(CC) -o $@ CircularBuffer.o test.o $(BOOST)

test.o: test.cpp CircularBuffer.h 
	$(CC) $(CFLAGS) -c test.cpp -o test.o 

CircularBuffer.o: CircularBuffer.cpp
	$(CC) $(CFLAGS) -c CircularBuffer.cpp -o CircularBuffer.o 

clean: 
	rm -f ps4a *.o