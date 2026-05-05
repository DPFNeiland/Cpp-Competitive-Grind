

#include <iostream>

using namespace std;

int main() {

    int T, X, resp = 0;

    cin >> T;

    for(int i = 0; i < 5; i++){
        cin >> X;
        if(X == T) resp++;
    }

    cout << resp << endl;
}
