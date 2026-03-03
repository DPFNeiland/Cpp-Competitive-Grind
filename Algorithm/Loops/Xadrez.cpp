#include <bits/stdc++.h>

using namespace std;

int main(){
	int L, C;
	
	cin >> L >> C;
	
	if((L%2==1 && C%2==0) || (L%2==0 && C%2==1))
		cout << "0" << endl;
	else
		cout << "1" << endl;
}
