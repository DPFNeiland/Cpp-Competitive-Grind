
#include <bits/stdc++.h>


using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n = -1, i = 1, resp;

    while (n != 0) {
        cin >> n;

        if (n == 0) break;

        resp = pow(2,n) - 1;
        cout << "Teste " << i << "\n"  << resp;
        cout << "\n" << "\n";
        i += 1;
    }
}