#include<iostream>

using namespace std;

int main(){
	int A, B;
	
	cin >> A >> B;
	
	if(A<B){
		for(int i = A; i <= B; i++){
			cout << i << " ";
		}
	} else {
		for(int i = B; i <= A; i++){
			cout << i << " ";
		}	
	}
	cout << endl;
}
