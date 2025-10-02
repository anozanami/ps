#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector <int> vx;
    vector <int> vy;
    vector <int> vz;
    
    for (int i = 0; i < n ; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        vx.push_back(x);
        vy.push_back(y);
        vz.push_back(z);
    }

    int m;
    cin >> m;
    while(m--) {
        int x, y, z, r;
        int cnt = 0;
        cin >> x >> y >> z >> r;
        for (int i = 0; i < n; i++) {
            double nx = (double)(x - vx[i]);
            double ny = (double)(y - vy[i]);
            double nz = (double)(z - vz[i]);
            nx = pow(nx, 2);
            ny = pow(ny, 2);
            nz = pow(nz, 2);
            if (pow(r, 2) >= (nx + ny + nz)) cnt++;
        }
        cout << cnt << endl;
    }
}

/*


지름이 r인 구의 내부에 점이 몇 개 있는지 출력한다. 
구의 표면 위에 있는 점도 내부에 있는 점이다.

어떤 조건을 만족하면 구 내부의 점이라고 할 수 있는가?
일단 O(nm) -> ok
x, y, z에서 각각 +- r 했을 때의 범위 안에 있으면 되는거 아닌가?
3개의 숫자를 
아니 그게 아니지;;;;;
해당 점과 원점 사이의 거리가 r과 비교해야지 멍청아;;;
r^2 = 
*/