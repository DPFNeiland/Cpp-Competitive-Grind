
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, soma = 0, x;
    
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> x;
        soma += x;
    }
    cout << soma << "\n";

}