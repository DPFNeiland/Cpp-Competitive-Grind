

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, m;
    string resp;

    cin >> a;
    cin >> m;

    if (a + m <= 50){
        resp = "S";
    } else {
        resp = "N";
    }

    cout << resp << '\n';

}