#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    
    string s;
    int numUpper = 0, numLower = 0;

    cin >> s;

    
    for(char x : s){
        if (isupper(x)) {
            numUpper++;
        } 
        else if(islower(x)){
            numLower++;
        }
    }

    
    if(numUpper > numLower){
        for (char &x : s) {
            x = toupper(x); 
        }
    } 
    else{
        for(char &x : s){
            x = tolower(x); 
        }
    }

    cout << s << endl;

    return 0;
}
