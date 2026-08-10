#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, d, resp = 0;
    cin >> a >> b >> c >> d;

    if ((a*b) < (c*d)){
        resp = 1;
    } else if((a*b) > (c*d)){

        resp = -1;
    }
    cout << resp << '\n';
    
    

}