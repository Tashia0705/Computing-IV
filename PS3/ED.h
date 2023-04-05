#ifndef ED_H
#define ED_H

#include <iostream>
#include <vector>
#include <string>
using namespace std; 

class ED {
    public:
        ED(string str_a, string str_b); 
        
        static int penalty(char a, char b); 
        static int min(int a, int b, int c);

        int OptDistance();
        void stringAlignment(); 
        //void printMatrix();

        //friend istream &operator >> (istream &in, ED & ed); 

    private:   
        string stra;
        string strb;
        vector<vector<int>> vec; 

}; 



#endif 