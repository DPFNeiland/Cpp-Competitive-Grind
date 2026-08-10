
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n1, n2, nota;
    string resp = "Final";

    cin >> n1;
    cin >> n2;

    nota = (2*n1 + 3*n2)/5;

    if (nota >= 7){
        resp = "Aprovado";
    } else if(nota < 3){
        resp = "Reprovado";
    }

    cout << resp << '\n';


}