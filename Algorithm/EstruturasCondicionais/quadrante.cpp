#include <bits/stdc++.h>

using namespace std;

int main (){
	int X, Y;
	
	cin >> X >> Y;
	
	if(X==0 || Y==0)
		cout << "eixos\n"; 
	else if(X>0 && Y>0)
		cout << "Q1\n";
	else if(X<0 && Y>0)
		cout << "Q2\n";
	else if(X<0 && Y<0)
		cout << "Q3\n";
	else
		cout << "Q4\n";
}
