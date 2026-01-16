#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    unordered_set<string> map;
    int n; 
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name, log;
        cin >> name >> log;
        
        if (log == "enter") {
            map.insert(name);
        } else {
            map.erase(name);
        }

    }

    vector<string> v(map.begin(), map.end());
    sort(v.begin(), v.end(), greater<>());

    for (auto it: v) {
        cout << it << '\n';
    }
}