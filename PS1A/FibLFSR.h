#ifndef FibLFSR_H
#define FibLFSR_H

#include <iostream>
#include <vector>
#include <string>
using namespace std; 

class FibLFSR {
public: 
	FibLFSR(string seed);
        int step(); 	
	int generate(int k);
        friend ostream& operator<< (ostream &out, const FibLFSR & fib);  
private: 
	vector<int> lfsr; 	

}; 

#endif
