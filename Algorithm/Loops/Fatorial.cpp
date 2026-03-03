#include <iostream>

using namespace std;

int main(){
	int N, resp=1;
	
	cin >> N;
	
	for(int i = 1; i <= N; i++){
		resp*=i;
	}
	
	cout << resp << endl;
}
