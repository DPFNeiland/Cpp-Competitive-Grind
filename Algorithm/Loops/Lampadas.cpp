#include<iostream>

using namespace std;

int main(){
	int N, X;
	
	bool L1=false, L2=false;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> X;
		if(X==1){
			L1 = !L1;
		} 
		if(X==2){
			L1 = !L1;
			L2 = !L2;
		}
	}
	
	cout << L1 << endl << L2 << endl;
}
