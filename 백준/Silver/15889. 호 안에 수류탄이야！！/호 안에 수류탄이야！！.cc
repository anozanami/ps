#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int ans = 0;
    vector<ll> v; // 죄표
    vector<ll> v2; // 사거리
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        ll tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    if (n == 1) {
        cout << "권병장님, 중대장님이 찾으십니다" << endl;
        return 0;
    }
    
    for (int i = 0; i < n-1; i++) {
        ll tmp;
        cin >> tmp;
        v2.push_back(tmp);
    }

    ll max_coord = v[0] + v2[0];
    
    for (int i = 1; i < n - 1; i++) {
        if (v[i] > max_coord) {
            ans = 1; // 실패
            break;
        }

        ll cur = v[i] + v2[i];
        max_coord = max(max_coord, cur);

        if (max_coord >= v[n - 1]) {
            break;
        }
    }

    if (ans == 0 && max_coord >= v[n-1]) {
        cout << "권병장님, 중대장님이 찾으십니다" << endl;
    } else {
        cout << "엄마 나 전역 늦어질 것 같아" << endl;
    }

    return 0;
}