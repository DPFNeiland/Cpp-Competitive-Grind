
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    int respA, respB, respC;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a < b && a < c){
        respA = 1;

        if (b > c) {
            respB = 3;
            respC = 2;

        } else {
            respB = 2;
            respC = 3;           
        }
    }

    if (b < a && b < c){
        respB = 1;

        if (a > c) {
            respA = 3;
            respC = 2;

        } else {
            respA = 2;
            respC = 3;         
        }
    }

    if (c < b && c < a){
        respC = 1;

        if (b > a) {
            respB = 3;
            respA = 2;

        } else {
            respB = 2;
            respA = 3;         
        }
    }


    cout << respA << '\n' << respB << '\n' << respC << '\n';


}