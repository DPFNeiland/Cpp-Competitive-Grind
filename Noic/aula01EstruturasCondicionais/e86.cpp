
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b;
    string resp = "Recuperacao";

    cin >> a >> b;

    if ((a + b) >= 14.0){
        resp = "Aprovado";
    } else if((a + b) < 8){
        resp = "Reprovado";
    }

    cout << resp << '\n';

}