#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double N;
	
	cin >> N;
	
	for(int i = 0; i < 100; i++){
		cout << "N[" << i << "] = " << fixed << setprecision(4)<< N << endl;
		N = N/2.0;
	}
}
