#include<bits/stdc++.h>

using namespace std;

int main (){
	double N1, N2;
	
	cin >> N1 >> N2;
	
	if(2*N1+3*N2>=35)
		cout << "Aprovado" << endl;
	else if(2*N1+3*N2<15)
		cout << "Reprovado" << endl;
	else
		cout << "Final" << endl;	
	
}
