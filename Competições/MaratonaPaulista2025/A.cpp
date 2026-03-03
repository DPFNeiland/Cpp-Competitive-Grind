#include <iostream>

using namespace std;

int main(){
	
	int W, A, B, C, aux;
	
	cin >> W >> A >> B >> C;
	
	aux = A + B+ C;
	if (aux > W) {
		cout << "N";
	}
	else {
		cout << "S";

	}
			
	
	return 0;
}
