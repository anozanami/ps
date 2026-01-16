#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    int cnt = 0;
    cin >> n >> m;
    unordered_map<string, int> map;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        map[s] = 0;
    }

    for (int i = 0; i < m; i++) {
        string s; cin >> s;
        if (map.find(s) == map.end()) continue;
        cnt++;
    }
    
    cout << cnt;
}