#include <bits/stdc++.h>

using namespace std;

int main(){
	int X=-1, maior=-1;
	
	while(X!=0){
		cin >> X;
		if(maior<X){
			maior = X;
		}
	}
	
	cout << maior << endl;
}
