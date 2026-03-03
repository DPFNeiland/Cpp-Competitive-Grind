#include <bits/stdc++.h>

using namespace std;

int main (){
	int IF1, IF2, IF3, IM;
	
	cin >> IM >> IF1 >> IF2;
	
	IF3 = IM - IF1 - IF2;
	
	if(IF3 > IF2 && IF3 > IF1)
		cout << IF3;
	else if(IF2 > IF1 && IF2 > IF3){
		cout << IF2;
	} else
		cout << IF1;
}
