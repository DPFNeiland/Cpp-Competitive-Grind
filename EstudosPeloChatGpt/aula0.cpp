#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, aux, sum = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> aux;
		sum += aux;
	}
	cout << sum;

}
