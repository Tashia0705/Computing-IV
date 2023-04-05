#include "ED.h"
#include <string.h>
#include <iomanip>

ED::ED(const string str_a, const string str_b) : stra(str_a), strb(str_b), 
vec(stra.size() + 1, vector<int>(strb.size() + 1, 0)) {
    
    int sumOf2 = 0;
    for(int i = str_b.size(); i >= 0 ; i--) { 
        vec[str_a.size()][i] = sumOf2; 
        sumOf2 = sumOf2 + 2; 
    }

    sumOf2 = 0; 
    for(int j = str_a.size(); j >= 0; j--) {
        vec[j][str_b.size()] = sumOf2; 
        sumOf2 = sumOf2 + 2; 
    }
}

int ED::penalty(char a, char b) {
    if(a == b) {
        return 0; 
    }
    return 1; 
}

int ED::min(int a, int b, int c) {
    if(a < b && a < c) {
        return a;
    }
    else if(b < a && b < c) {
        return b; 
    }
    return c; 
}

int ED::OptDistance() {
    for(int i = stra.size() - 1; i >= 0; i--) {
        for(int j = strb.size() - 1; j >= 0; j--) {
            vec[i][j] = min(vec[i+1][j+1] + penalty(stra[i], strb[j]),
            vec[i+1][j] + 2, vec[i][j+1] + 2); 
        }
    }
    return vec[0][0];  
}

void ED::stringAlignment() {
    unsigned int i = 0, j = 0;
    while(i < stra.size() && j < strb.size()) {
        if(vec[i][j] == vec[i+1][j+1] && stra[i] == strb[j]) {
            cout << stra[i] << " " << strb[j] << " 0" << endl;
            i++; j++; 
        }            
        else if(vec[i][j] == vec[i+1][j+1] + 1) {
            cout << stra[i] << " " << strb[j] << " 1"<< endl; 
            i++; j++; 
        }
        else if(vec[i][j] == vec[i+1][j] + 2) {
            cout << stra[i] << " - 2" << endl; 
            i++;  
        }
        else if(vec[i][j] == vec[i][j+1] + 2) {
            cout << "- " << strb[j] << " 2" << endl; 
            j++; 
        }
        
    }
    
} 

/*void ED::printMatrix() {
    for(unsigned i = 0; i < vec.size(); i++) {
        for(unsigned j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j] << setw(3); 
        }
        cout << endl; 
    }

}
*/ 