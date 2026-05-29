
#include<bits/stdc++.h>

using namespace std;

bool verificacao(string t){
    stack<char> cad;    
    for(char c : t){

        if ((c == '(') || (c == '[') || (c == '{')) cad.push(c);

        if (c == ')') {
            if ((cad.size() == 0) || (cad.top() != '(')) return false;
            else cad.pop();
        }

        if (c == ']'){
            if ((cad.size() == 0) || (cad.top() != '[')) return false;
            else cad.pop();
        }

        if (c == '}') {
            if ((cad.size() == 0) || (cad.top() != '{')) return false;
            else cad.pop();
        }
    }

    if (cad.size() != 0) return false;

    return true;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string teste;
    vector<char> respostas;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> teste;

        if (verificacao(teste)) respostas.push_back('S');
        else respostas.push_back('N');

    }

    for(auto resp : respostas){
        cout << resp << "\n";
    }





}