#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, aux, m, p = 0, im = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;
        m += aux;

        if (aux % 2 == 0) {
            p += 1;
        }
        else {
            im += 1;
        }
    }

    cout << "Media: " << m/n << "\n";
    cout << "Pares: " << p << "\n";
    cout << "Impares: " << im << "\n";

    return 0;
}
