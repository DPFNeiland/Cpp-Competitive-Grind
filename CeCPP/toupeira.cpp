#include <bits/stdc++.h>

using namespace std;

	vector <vector<int> > g;
	vector <int> c;

int main () {

	int S, T, X, Y;

	cin >> S >> T;
	
	for(int i = 0; i < T; i++){
		cin >> X >> Y; 
		X--; Y--;
		
		g[X].push_back(Y);
		g[Y].push_back(X);		
	}	
	
	int P, N, aux;
	
	cin >> P;
	
	
	
	for(int i = 0; i < P; i++){
		cin >> N;
		for(int j = 0; j < N; j++){
			cin >> aux;
			c.push_back(aux);
		}
		for(int j = 0; j < N; j++){
			if(g[j]!=g[j+1]){
				
			}
		}		
	}
	
		
}
