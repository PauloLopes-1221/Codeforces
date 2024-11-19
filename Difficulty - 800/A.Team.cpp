#include <iostream>

using namespace std;

int main(){
	
	int n, p, v, t, i, c = 0;
	
	cin >> n; //Numero de casos
	
	while(n != 0){
		
		cin >> p;
		cin >> v;
		cin >> t;
		
		if(p + v + t >= 2){ //Checa a quantidade de 1 e 0 presentes
			c++;
		}
			
		n--;			
	}
	
	cout << c << endl;
		
	return 0;
}
