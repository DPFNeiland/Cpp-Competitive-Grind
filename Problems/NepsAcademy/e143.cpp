
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, aux, moedas[6] = {100, 50, 25, 10, 5, 1}, i, tamanho = 6;

    cin >> n;

    int resp[7] = {0, 0, 0, 0, 0, 0, 0};

    for(i = 0; i < tamanho; i++){
        aux = n / moedas[i];

        resp[0] += aux;
        resp[i + 1] = aux;

        n -= (moedas[i] * resp[i + 1]);

    }

    
    for(i = 0; i < tamanho + 1; i++){
        cout << resp[i] << "\n";
    }

}