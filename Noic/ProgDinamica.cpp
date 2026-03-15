#include <bits/stdc++.h>

using namespace std;

long long int fibValueCal[10010];
bool fibJaCal[10010];

long long int Fib(int n){

    if (fibJaCal[n] == 1) {
        return fibValueCal[n];
    }
    if ((n == 1) || (n == 2)){
        return 1;
    }

    fibJaCal[n] = 1;

    fibValueCal[n] = Fib(n-1) + Fib(n-2);

    return fibValueCal[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    for(n = 1; n <= 100; n++){
        cout << Fib(n) << '\n';
    }




}
