#include<iostream>

using namespace std;

int main(){
	int N, maior=0, resp=1;
	
	cin >> N;
	
	int V[N];
	
	for(int i = 0; i < N; i++){
		cin >> V[i];
	}
	
	for(int i = 0; i < N-1; i++){
		if(V[i]==V[i+1]){
			resp++;
		} else {
			resp = 1;
		}
		
		if(maior<resp){
			maior=resp;
		}
	}
	
	cout << maior << endl;
}
