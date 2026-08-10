
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, c, resp = "";

    cin >> a >> b >> c;

    if (a == b){
        if (a==c){
            resp = '*';
        } else {
            resp = "C";
        }

    } else if(b==c){
        resp = "A";

    } else {
        resp = "B";
    }

    cout << resp << '\n';
}

