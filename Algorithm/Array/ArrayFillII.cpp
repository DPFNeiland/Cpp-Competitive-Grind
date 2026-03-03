#include <iostream>

using namespace std;

int main(){
	int T, aux=0;
	
	cin >> T;
	
	for(int i = 0; i < 1000; i++){
		cout << "N[" << i << "] = " << aux << endl;
		if(aux<T-1)
			aux++;
		else
			aux = 0;
	}
}
