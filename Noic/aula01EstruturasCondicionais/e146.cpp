

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    string resp = "eixos";

    cin >> x;
    cin >> y;

    if (x > 0){
        if (y > 0) {
            resp = "Q1";
        } else if(y < 0) {
            resp = "Q4";
        }
    } else if (x < 0){
        if (y > 0) {
            resp = "Q2";
        } else if(y < 0) {
            resp = "Q3";
        } 
    }

    cout << resp << '\n';

}