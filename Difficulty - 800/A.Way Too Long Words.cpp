#include <iostream>
#include <string>
 
using namespace std;

int main(){
	
	int n; //Numero de casos
	string s;
		
	cin >> n;
	
	while(n != 0){
		
		cin >> s;
		
		if(s.length() > 10){ //Verifica o tamanho da string
			cout << s.at(0) << s.length() - 2 << s.at(s.length() - 1) << endl; //Imprime a quantidade de caracteres entre a primeira e ultima letra					
		}
		else{ //Tamanho menor ou igual a 10 imprime a palavra sem modificacoes
			cout << s << endl;
		}
				
		n--; 	
	}
		
	return 0;
}
