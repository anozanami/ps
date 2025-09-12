#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;
deque <pair<int, int>> dq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string, int> m;
    int n;
    int cnt = 0;
    char c;
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m.insert(make_pair(s, i));
    }
    cnt = m.size();

    if (c == 'Y') { // 2명
        cout << ceil(cnt);
    } else if (c == 'F') { // 3명 
        cout << ceil(cnt / 2);
    } else { // O 4명
        cout << ceil(cnt / 3);
    }
}

/*
의문점: 만약에 중간에 있는 원소를 제거해야하면 덱에서 어떻게 처리를 해야하는가?


*/