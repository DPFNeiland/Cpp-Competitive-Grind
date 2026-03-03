#include <iostream>

using namespace std;

int main(){
	int N, resp=-2, aux=-1;
	
	cin >> N;
	
	int X[N];
	
	for(int i = 0; i < N; i++){
		cin >> X[i];
		if(i==0){
			resp = X[i];
			aux=i;
		}
		if(resp>X[i]){
			resp = X[i];
			aux=i;
		}
	}
	cout << "Menor valor: " << resp << endl << "Posicao: " << aux << endl;
}
