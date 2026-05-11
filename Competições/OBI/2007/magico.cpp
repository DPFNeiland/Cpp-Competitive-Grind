
#include <bits/stdc++.h>

using namespace std;

int verificar_quadrado(int n, vector<vector<int>> &quadrado){

    int aux = 0, soma = 0;
    // fazer a soma
    for (int l = 0; l < n; l++){
        soma += quadrado[0][l];
    }


    // verifico as linhas
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n; j++){
            aux += quadrado[i][j];
        }

        if (soma != aux){
            return -1;
        }
        aux = 0;
    }


    // verifico as colunas
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            aux += quadrado[j][i];
        }

        if (soma != aux){
            return -1;
        }
        aux = 0;
    }



    // verifico a diagonal principal
    for (int i = 0; i < n; i++){
        aux += quadrado[i][i];
    }

    if (soma != aux){
        return -1;
    }
    aux = 0;

    //verifico a diagonal secundária
    
    for (int i = 0; i < n; i++){
        aux += quadrado[i][n-i-1];
    }

    if (soma != aux){
        return -1;
    }


    return soma;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, aux;
    cin >> n;

    vector<vector<int>> quadrado(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> aux;
            quadrado[i][j] = aux;
        }
    }

    // realizando o cálculo da soma

    cout << verificar_quadrado(n, quadrado) << "\n";
}