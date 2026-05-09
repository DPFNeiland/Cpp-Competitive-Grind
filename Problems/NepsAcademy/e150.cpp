
#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, resp;
 
    cin >> x;

    resp = x;

    cin >> x;

    if (resp < x)
        resp = x;

    cin >> x;

    if (resp < x)
        resp = x;

    cout << resp << '\n';
}