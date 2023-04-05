#include "FibLFSR.h"

//Constructor 
FibLFSR::FibLFSR(string seed) {
   //storing each char in a vector;  	
   for(int i = 0; i <= 15; i++) {
      lfsr.push_back(static_cast<int>(seed[i])- 48); 
   }    
} 	

//Overlaod << operator  
ostream& operator<< (ostream &out, const FibLFSR &fib) {
   for(int i = 0; i <= 15; i++) {
      out << fib.lfsr[i];
   } 
   return out;
}

//Step function 
int FibLFSR::step() {
//create new bit by XORing leftmost bit with tap bit
   int result = lfsr[0] ^ lfsr[2];
   result = result ^ lfsr[3];
   result = result ^ lfsr[5];

   //set the last bit to the result
   lfsr.erase(lfsr.begin()); 
   lfsr.push_back(result); 

   return result; 
}

//Extracting multiple bits
int FibLFSR::generate(int k) {
   int result = 0;
   for(int i = 1; i <= k; i++) {
      result = result * 2 + step(); 
   }
   return result; }
