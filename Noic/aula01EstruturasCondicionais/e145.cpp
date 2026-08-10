
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    string resp;

    cin >> a;

    if (a > 0){
        resp = "positivo";
    } else if (a < 0){
        resp = "negativo";
    } else {
        resp = "nulo";
    }

    cout << resp << '\n';

}