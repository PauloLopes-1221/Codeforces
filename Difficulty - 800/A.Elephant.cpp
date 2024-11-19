#include <iostream>

using namespace std;

int main() {
	
    int x;
    
    cin >> x;

    int passos = 0;

    while (x > 0) {
    	
        if (x >= 5) {
            x -= 5; 
        } 
		else {
            x -= x;
        }
        
        passos++; 
        
    }

    cout << passos << endl;

    return 0;
}
