#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

vector<pair<int, int>> v;
int arr[101];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    int g, x, y;
    while(m--) {
        int cnt = 0;
        cin >> g >> x >> y;

        for (int i = 0; i < n ; i++) {
            int a = v[i].first;
            int b = v[i].second;
            if (x <= a && y <= b && (a+b) <= g) {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    
}

/*



*/