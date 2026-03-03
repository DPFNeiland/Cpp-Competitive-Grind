#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    long long n, aux, maior = 0, menor = 0, soma = 0;
    vector<long long> v;

    cin >> n;

    if (n >= 1) {
        cin >> aux;
        v.push_back(aux);
        maior = v[0];
        menor = v[0];

        soma += aux;

        for (int i = 1; i < n; i++){
            cin >> aux;
            soma += aux;

            if (maior < aux){
                maior = aux;
            }
            else if (menor > aux) {
                menor = aux;
            }
        }
        cout << "Soma: " << soma << "\n";
        cout << "Maior: " << maior << "\n";
        cout << "Menor: " << menor << "\n";

    }


    return 0;
}
