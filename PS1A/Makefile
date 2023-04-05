CC = g++ 
CFLAGS = -std=c++11 -Wall -Werror -pedantic
Boost = -lboost_unit_test_framework

all: ps1a

ps1a: test.o FibLFSR.o 
	$(CC) $(CFLAGS) -o ps1a test.o FibLFSR.o $(Boost)

test.o: test.cpp FibLFSR.h 
	$(CC) $(CFLAGS) -c test.cpp -o test.o 

FibLFSR.o: FibLFSR.cpp FibLFSR.h 
	$(CC) $(CFLAGS) -c FibLFSR.cpp -o FibLFSR.o 

clean: 
	rm main PS1a *.o 



