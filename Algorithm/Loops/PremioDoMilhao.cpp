#include <bits/stdc++.h>


using namespace std;

int main(){
	int N, A, sum=0, i=0, aux=0;
	
	cin >> N;
	
	while(i < N){
		if(sum<1000000){
			aux++;
		}
		cin >> A;
		sum+=A;
		i++;
	}
	
	cout << aux;
	
	
}
