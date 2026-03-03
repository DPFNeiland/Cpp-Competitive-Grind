#include <iostream>

using namespace std;

int main(){
	int X, even=0, odd=0, par[5], impar[5];
	
	for(int i = 0; i < 15; i++){
		cin >> X;
		if(X%2 == 0){
			par[even] = X;
			even++;
		}
		else{		
			impar[odd] = X;
			odd++;
		}
		if(even == 5){
			for(int j = 0; j < 5;j++){
				cout << "par[" << j << "] = " << par[j] << endl;
			}
			even = 0;
		}
		if(odd == 5){
			for(int j = 0; j < 5;j++){
				cout << "impar[" << j << "] = " << impar[j] << endl;
			}
			odd = 0;
		}
	}
	
	for(int i = 0; i < odd; i++){
		cout << "impar[" << i << "] = " << impar[i] << endl;
	}
	for(int i = 0; i < even; i++){
		cout << "par[" << i << "] = " << par[i] << endl;
	}
}
