
#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i, j, aux, resp = 0, soma = 0;

    cin >> n;

    int valores[n][n], somaLinha[n], somaColuna[n];


    for(i = 0; i < n; i++){
        soma = 0;
        for(j = 0; j < n; j++){
            cin >> aux;
            valores[i][j] = aux;
            soma += aux;
        }

        somaLinha[i] = soma; 
    }

    // Soma Coluna
    for(i = 0; i < n; i++){
        soma = 0;
        for(j = 0; j < n; j++){
            soma += valores[j][i];

        }
        somaColuna[i] = soma; 
    }

        
    // soma
    for(i = 0; i < n; i++){
        aux = 0;
        for(j = 0; j < n; j++){
            aux = somaLinha[i] + somaColuna[j] - 2 * valores[i][j];

            if (resp < aux){
                resp = aux;
            }
        }
    }


    cout << resp << "\n";


}