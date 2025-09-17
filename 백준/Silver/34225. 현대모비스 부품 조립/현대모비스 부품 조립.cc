#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    sort(v.rbegin(), v.rend());

    ll ans = (ll)v[0].first * 3;
    int idx = 0;

    ll sum = v[0].first;
    ll mx = v[0].first;
    
    for (int i = 1; i < n; i++) {
        ll mn = v[i].first;
        sum += mn;
        
        ll score = mx + mn + sum;

        if (score > ans) {
            ans = score;
            idx = i;
        }
    }

    cout << idx + 1 << endl;

    for (int i = 0; i <= idx; i++) {
        cout << v[i].second << ' ';
    }
    cout << endl;

    return 0;
}