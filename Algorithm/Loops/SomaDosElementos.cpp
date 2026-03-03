#include <bits/stdc++.h>

using namespace std;

int main(){
	int N, sum=0, aux;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> aux;
		sum+=aux;
	}
	
	cout << sum << endl;
}
