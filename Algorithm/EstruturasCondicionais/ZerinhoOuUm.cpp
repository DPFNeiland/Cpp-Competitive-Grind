#include <bits/stdc++.h>

using namespace std;

int main (){
	int A, B, C;
	
	cin >> A >> B >> C;
	
	if(A==B && B!=C){
		cout << "C" << endl;
	} else if(A==C && C!=B){
		cout << "B" << endl;
	} else if(B==C && C!=A){
		cout << "A" << endl;
	} else
		cout << "*" << endl;
}
