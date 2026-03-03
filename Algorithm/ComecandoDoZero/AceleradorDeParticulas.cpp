#include <bits/stdc++.h>

using namespace std;

int main(){
	int D;
	
	cin >> D;
	
	D = D - 3;
	
	while(D>8){
		D = D - 8;
	}
	switch(D) {
	
	case 3:
		cout << "1" << endl;
		break;
	case 4:
		cout << "2" << endl;
		break;
	case 5:
		cout << "3" << endl;
		break;
}
} 
