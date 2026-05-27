
#include <bits/stdc++.h>

using namespace std;

bool proc(int v[3][3]){
    int i, j, soma = 0, aux = 0;

    // valor da soma
    for(i = 0; i < 3; i++){
        soma += v[0][i];
    }

    // soma das linhas
    for(i = 0; i < 3; i++){
        aux = 0;
        for(j = 0; j < 3; j++){
            aux += v[i][j];
        }
        if (aux != soma) return false; 
    }
    // soma das colunas
    for(i = 0; i < 3; i++){
        aux = 0;
        for(j = 0; j < 3; j++){
            aux += v[j][i];
        }
        if (aux != soma) return false; 
    }

    // soma das diagonal principal
    aux = 0;
    for(i = 0; i < 3; i++){
        aux += v[i][i];
    }
    if (aux != soma) return false; 

    // diagonal secundaria
        aux = 0;
    for(i = 0; i < 3; i++){
        aux += v[2-i][i];
    }
    if (aux != soma) return false; 

    return true;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int v[3][3], i, j, aux;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> aux;
            v[i][j] = aux;
        }
    }

    if (proc(v)) cout << "SIM";
    else cout << "NAO";
    cout << "\n";


}