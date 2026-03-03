#include <bits/stdc++.h>

using namespace std;

int main (){
	int T1, T2, T3;
	
	int maior = 0, menor = 1001, Ouro=0, Prata=0, Bronze=0;
	
	cin >> T1 >> T2 >> T3;

	
	if(menor>T1){
		menor = T1;
		Ouro = 1;
	}	
	if(menor>T2){
		menor = T2;
		Ouro = 2;
	}
	if(menor>T3){
		menor = T3;
		Ouro = 3;
	}	
	
	
	if(maior<T1){
		maior = T1;
		Bronze = 1;
	}
	if(maior<T2){
		maior = T2;
		Bronze = 2;
	}
	if(maior<T3){
		maior = T3;
		Bronze = 3;
	}
	
	if((Ouro==1) && (Bronze==2))
		Prata = 3;
	if((Ouro==2) && (Bronze==1))
		Prata = 3;
	if((Ouro==1) && (Bronze==3))
		Prata = 2;
	if((Ouro==3) && (Bronze==1))
		Prata = 2;
	if((Ouro==2) && (Bronze==3))
		Prata = 1;
	if((Ouro==3) && (Bronze==2))
		Prata = 1;
			
	cout << Ouro << endl << Prata << endl << Bronze << endl;
		
}

