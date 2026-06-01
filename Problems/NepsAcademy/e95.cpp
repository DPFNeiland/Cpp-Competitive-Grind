
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int a1, a2, a3, resp;

    cin >> a1;
    cin >> a2;
    cin >> a3;

    resp = min(min(a1*0 + a2*2 + a3*4, a1*4 + a2*2 + a3*0), a1*2 + a2*0 + a3*2 );

    cout << resp << "\n";

}