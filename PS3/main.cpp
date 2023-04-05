#include "ED.h"
#include <SFML/System.hpp>

int main() {
    sf::Clock clock; 
    sf::Time t;

    string str1, str2; 
    cin >> str1; 
    cin >> str2; 
    
    ED ed(str1, str2); 
    ed.OptDistance();
    int result = ed.OptDistance(); 
    cout << "Edit Distance = "  << result << endl; 
    ed.stringAlignment();  

    t = clock.getElapsedTime();
    cout << "Execution time is: " << t.asSeconds() << " seconds \n"; 
    
    //ed.printMatrix(); 

    return 0;
}

