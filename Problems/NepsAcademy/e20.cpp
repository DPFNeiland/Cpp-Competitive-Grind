

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int A, B, C, resp;

    cin >> A;
    cin >> B;
    cin >> C;

    if (A == B)
        resp = C;

    else if (A == C)
        resp = B;
    
    else
        resp = A;

    cout << resp << "\n";

}