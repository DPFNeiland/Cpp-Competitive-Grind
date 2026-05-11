
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 0, b = 0, n, aux;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;

        if (aux == 1){
            a = !a;
        }

        if (aux == 2){
            a = !a;
            b = !b;
        }
    }

    cout << a << "\n" << b << "\n";

    
}