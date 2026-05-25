

#include <bits/stdc++.h>

using namespace std;


char resolucao(string vogais){
    int i, n = vogais.size();

    for(i = 0; i < n / 2; i ++){

        if (vogais[i] != vogais[n-1-i])
            return 'N';
    }

    return 'S';

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string entrada, vogais = "";
    int i, n;

    cin >> entrada;

    n = entrada.size();

    for(i = 0; i < n; i++){
        
        if(entrada[i] == 'a' || entrada[i] == 'e' ||entrada[i] == 'i' ||entrada[i] == 'o' ||entrada[i] == 'u'){
            vogais += entrada[i];
        }

    }


    cout << resolucao(vogais) << "\n";


}