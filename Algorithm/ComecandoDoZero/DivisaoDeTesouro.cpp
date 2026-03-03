#include <bits/stdc++.h>

using namespace std;

int main(){
	int A, N;
	// A: o número inteiro de moedas na arca
	// N: o número inteiro de marinheiros (não contando o Capitão).
	cin >> A >> N;
	
	cout << (A/(N+2))*2;
}
