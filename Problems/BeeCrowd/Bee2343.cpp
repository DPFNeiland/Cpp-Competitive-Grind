#include <iostream>
#include <vector> // Para vector
#include <algorithm> // min e max
#include <set> // set
#include <map> // map

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define f first
#define s second

#define dbg(x) cout << #x << " = " << x << endl;
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

    int resp = 0, N; cin >> N;


    int Qua[501][501] = {0};

    for(int i = 0; i < N; i++){
        int X, Y;
        cin >> X >> Y;
        Qua[X][Y]++;

        if(Qua[X][Y] == 2){
            resp = 1;
        }
    }

    cout << resp << endl;

}
