#include<bits/stdc++.h>

using namespace std;

int main(){
	double A, B;
	
	cin >> A >> B;
	
	if((A+B)>=14)
		cout << "Aprovado" << endl;
	else if((A+B)<8)
		cout << "Reprovado" << endl;
	else
		cout << "Recuperacao" << endl;
}
