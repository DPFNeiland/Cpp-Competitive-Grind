
#include <bits/stdc++.h>
# define x first
# define y second


using namespace std;

typedef pair<double, double> Ponto;
typedef vector<Ponto > polygon;

bool esta_na_borda(Ponto p, Ponto a, Ponto b) {
    double cp = (p.y-a.y)*(b.x-a.x)- (p.x-a.x)*(b.y-a.y);

    if(abs(cp) > 0) return false;

    return p.x >= min(a.x, b.x)&&
           p.x <= max(a.x, b.x) &&
           p.y >= min(a.y, b.y) &&
           p.y <= max(a.y, b.y);

}

bool ponto_no_poligono(Ponto p, polygon poligono) {
    int n = poligono.size();
    if (n < 3) return false;

    double minX = poligono[0].x, maxX = poligono[0].x;
    double minY = poligono[0].y, maxY = poligono[0].y;

    for(const auto & v: poligono){
        minX = min(minX, v.x); maxX=max(maxX, v.x);
        minY = min(minY, v.y); maxY=max(maxY, v.y);
    }

    if (p.x <minX || p.x > maxX || p.y < minY|| p.y >maxY) {
        return false;
    }

    bool dentro = false;
    for(int i = 0, j = n - 1; i < n; j = i++) {
        Ponto a = poligono[i];
        Ponto b = poligono[j];

        if(esta_na_borda(p, a, b)) return true  ;

        if(((a.y > p.y) != (b.y > p.y)) && (p.x < (b.x - a.x) * (p.y-a.y)/(b.y-a.y)+ a.x)){
            dentro = !dentro;
        }
    }
    return dentro;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    polygon ESP;
    int n;
    double Xatual, Yatual;
    vector<int> resp;

    ESP.push_back({-200, 0});
    ESP.push_back({-100, 0});
    ESP.push_back({0, -100});
    ESP.push_back({100, -100});
    ESP.push_back({200, 0});
    ESP.push_back({100, 0});
    ESP.push_back({0, 100});
    ESP.push_back({-100, 100});

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> Xatual >> Yatual;

        resp.push_back(ponto_no_poligono({Xatual, Yatual}, ESP));
    }

    for(int i = 0; i < n; i++) {
       if(resp[i]) {
            cout << "S" << '\n';
       } else {
            cout << "N" << '\n';
        }
    }

}
