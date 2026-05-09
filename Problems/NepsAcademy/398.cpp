
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    char c;
    int soma = 0;

    cin >> s;
    cin >> c;

    for(int i = 0; i < s.length(); i++){
        if (s[i] == c) {
            soma += 1;
        }
    }

    cout << soma << "\n";

}