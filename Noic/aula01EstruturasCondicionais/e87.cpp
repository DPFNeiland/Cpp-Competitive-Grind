
#include <bits/stdc++.h>

using namespace std;

int main() {

    int p, r;
    char resp;

    cin >> p >> r;

    if (!p){
        resp = 'C'; 
    } else if(!r) {
        resp = 'B';
    } else{ 
        resp = 'A';
    }


    cout << resp << "\n";


}