#include <iostream>

using namespace std;

int main(){
	int N, resp=0;
	
	cin >> N;
	
	int n[N];
	
	for(int i = 0; i < N; i++){
		cin >> n[i]; 
	}
	
	for(int i = 0; i < N-2; i++){
		if(n[i]==1 && n[i+1]==0 && n[i+2]==0){
			resp++;
		}
	}
	
	cout << resp << endl;
}
