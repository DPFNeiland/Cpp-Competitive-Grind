
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie();

    int n, c, m, x, y, resp;

    cin >> n >> c >> m;
    resp = c;

    set <int> carimbadas, achadas;

    for(int i = 0; i < c; i++){
        cin >> x;
        carimbadas.insert(x);
    }

    for(int i = 0; i < m; i++){
        cin >> y;

        if (achadas.count(y)) continue;
        if (carimbadas.count(y)) {
            resp -= 1;
            achadas.insert(y);
        }
    }

    cout << resp << "\n";



}