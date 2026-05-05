#include <iostream>
// 	sort(arr, arr + o tamanho dele);
// vector<int> resp;
// resp.pop_back();
// resp.push_back(num);

// Tabela Ascii 97 - 122 minúsculos
/*
	a = 97
	e = 101
	i = 105
	o = 111
	u = 117

*/

using namespace std;

int main(){
	int T, R[5], resp = 0;
	
	cin >> T;
	
	for(int i = 0; i < 5; i++){
		cin >> R[i];	
	}
	
	for(int i = 0; i < 5; i++){
		if(T==R[i]){
			resp++;
		}
	}
	
	cout << resp << endl;
}



