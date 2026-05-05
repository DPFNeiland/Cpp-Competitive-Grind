#include <iostream>

using namespace std;

int main() {
    int T, resp = 1;

    for(int i = 0; i < 4; i++){
        cin >> T;

        if(T==0) resp = T;

        if(T!=0) resp = resp -1 + T;
    }

    cout << resp << endl;
}
