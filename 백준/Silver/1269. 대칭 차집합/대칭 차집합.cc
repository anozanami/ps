#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<int, bool> map;
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < n+m; i++) {
        int k;
        cin >> k;
        if (map.count(k)) {
            map.erase(k);
        } else {
            map.insert({k, true});
        }
    }

    cout << map.size();

}