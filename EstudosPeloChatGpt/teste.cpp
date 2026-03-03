#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second
#define a_num first.first
#define a_den first.second
#define b second

typedef pair<int, int> point;
typedef pair<pair<int, int>, int> line;
typedef vector<point> polygon;

// produto interno dos pontos a e b
int dot(point a, point b) {
    return a.x*b.x + a.y*b.y;
}

int norm(point a){
    return dot(a, a);
}

double length(point a){
    return sqrt(norm(a));
}

double angle(point a, point b){
    return acos(dot(a,b)/length(a)*length(b));
}

double angle_ori(point a, point b, point c){
    a = {a.x-c.x, a.y-c.y};
    b = {b.x-c.x, b.y-c.y};
    return angle(a, b);
}

    double area_polygon(polygon p) {
        int n = p.size();
        double area = 0.0;
        for (int i = 0; i < n; i++) {
            point p1 = p[i], p2 = p[(i + 1)%n];
            area += (p2.x + p1.x) * (p2.y - p1.y);
        }
        area /= 2.0;
        return abs(area);

    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double x = 0.3;

    cout << setprecision(30) << fixed << x << '\n';


    typedef pair<int, int> point;

    typedef vector<point > polygon;

    polygon ESP;


    ESP.push_back({0, -100});
    ESP.push_back({100, -100});
    ESP.push_back({200, 0});
    ESP.push_back({100, 0});
    ESP.push_back({0, 100});
    ESP.push_back({-100, 100});
    ESP.push_back({-200, 0});
    ESP.push_back({-100, 0});




    cout << area_polygon(ESP) << '\n';
}
