#include <bits/stdc++.h>

using namespace std;

int main (){
	
	int N, P, Q;
	char C;
	
	cin >> N >> P >> C >> Q;
	
	if(C=='+' && P+Q>N)
		cout << "OVERFLOW" << endl;
	else if(C=='+' && P+Q<=N)
		cout << "OK" << endl;
	else if(C=='*' && P*Q>N)
		cout << "OVERFLOW" << endl;
	else if(C=='*' && P*Q<=N)
		cout << "OK" << endl;
	
}
