#import <iostream>
#import <string>

using namespace std;

int main() {
	
	int x = 0, n;
	string y;
	
	cin >> n;
	
	while(n > 0) {
		
		cin >> y;
		
		if(y == "++X" || y == "X++") {
			x++;
		} 
		else if(y == "--X" || y == "X--") {
			x--;		
		}
				
		n--;
	}
	
	cout << x << endl;
	
	return 0;
}
