
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    string resp = "Cino";

    cin >> a;
    cin >> b;

    if ((a + b) % 2 == 0){
        resp = "Bino";
    }

    cout << resp << '\n';

    

}