#include <iostream>

using namespace std;

int main(){
	int N, L, C, resp=0;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> L >> C;
		if(L>C){
			resp+=C;
		}
	}
	
	cout << resp << endl;
}
