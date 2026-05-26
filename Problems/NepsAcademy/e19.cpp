

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i, numero, resp = 0;
    char lado;
    vector<pair<int, int>> sapatos(31);

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> numero >> lado;

        numero -= 30;

        if (lado == 'E'){
            sapatos[numero].first += 1;
        } else {
            sapatos[numero].second += 1;
        }
    }

    
    for(i = 0; i < 31; i++){
        resp += min(sapatos[i].first, sapatos[i].second);
   
    }

    cout << resp << "\n";
    
}