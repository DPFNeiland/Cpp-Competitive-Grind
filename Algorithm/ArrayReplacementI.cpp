#include <iostream>

using namespace std;

int main(){
	int X[10];
	
	for(int i = 0; i < 10; i++){
		cin >> X[i];
			
		if(X[i]<=0){
			X[i] = 1;
		}
	}
	
	for(int c = 0; c < 10; c++){
		cout << "X[" << c << "] = " << X[c] << endl;
	}
}
