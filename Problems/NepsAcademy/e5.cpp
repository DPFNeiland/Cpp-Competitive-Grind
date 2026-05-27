
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H, P, F, D;

    cin >> H >> P >> F >> D;

    while(true){

        if(F == H){
            cout << "S";
            break;
        }

        if(F == P){
            cout << "N";
            break;
        }

        F += 1*D;

        if(F == 16){
            F = 0;
        }
        

        if(F == -1){
            F = 15;
        }
        
    } 

    cout << "\n";
    

}