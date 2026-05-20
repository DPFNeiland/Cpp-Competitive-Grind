
#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, aux, indicEsquerda = -99999999, indicDireita = 99999999, i = 0;
    cin >> n;

    vector<long long int> valores, resp(n, 9LL);


    for(i = 0; i < n; i++){
        cin >> aux;
        valores.push_back(aux);

    }

    for(i = 0; i < n; i++){

        if (valores[i] == 0)
            indicEsquerda = i;
        
        resp[i] = min(resp[i], abs(i - indicEsquerda));
        
    }

    for(i = n - 1; i >= 0; i--){

        if (valores[i] == 0)
            indicDireita = i;
        
        resp[i] = min(resp[i], abs(indicDireita - i));
        
    }



    // impressao
    for(i = 0; i < n; i++){
        cout << resp[i] << " ";
    }



}