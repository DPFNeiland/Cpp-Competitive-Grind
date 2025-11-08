#include <iostream>
#include <vector>

using namespace std;

int maximo(int A, int B){

    if(A > B)
        return A;
    return B;


}

int mochila(vector<pair<int, int>> itens, int capacidade){
    int n = itens.size(), qtdcaracteres = -1, desculpas = -1, desculpas_anterior = -1, desculpas_atual = -1;

    vector<vector<int>> resp(n + 1, vector<int>(capacidade + 1, 0));

    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < capacidade + 1; j++){
            resp[i][j] = 0;
        }
    }

    for(int i = 1; i < n + 1; i++){
        qtdcaracteres = itens[i-1].first;
        desculpas = itens[i-1].second;

        for(int j = 1; j < capacidade + 1; j++){
            desculpas_anterior = resp[i - 1][j];
            desculpas_atual = -1;

            if (qtdcaracteres <= j){
                desculpas_atual = desculpas + resp[i-1][j-qtdcaracteres];
            }

            resp[i][j] = maximo(desculpas_atual, desculpas_anterior);
        }
    }
    
    return resp[n][capacidade];
    
}


int main() {
    int c = -1, f = -1, n = -1, d = -1, aux = 1;
    cin >> c >> f;


    while (c != 0 && f != 0){
        vector<pair<int, int>> palavras;

        for(int i = 0; i < f; i++){
            cin >> n >> d;
            palavras.push_back(make_pair(n, d));
        }

        cout << "Teste " << aux << endl;
        cout << mochila(palavras, c) << endl;
        cout << endl;
        aux += 1;
        
        cin >> c >> f;
    }

    // itens.push_back(make_pair("radio", make_pair(3000, 4)));
    // itens.push_back(make_pair("notebook", make_pair(2000, 3)));
    // itens.push_back(make_pair("violao", make_pair(1500, 1)));

   

    

    
    
}