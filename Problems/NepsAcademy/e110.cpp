
#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, resp = 0, atual, aux, salvo;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;

        if ((i != 0) && (salvo == aux)){
            atual += 1;
        } else {
            atual = 1;
        }

        if (atual > resp){
            resp = atual;
        }

        salvo = aux;
    }

    cout << resp << "\n";


}