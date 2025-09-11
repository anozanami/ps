#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;
deque <pair<int, int>> dq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        int tmp;
        cin >> tmp;
        dq.push_back(make_pair(tmp, i));
    }

    for (int i = 0 ; i < n; i++) {
        int cnt = dq.front().first;
        cout << dq.front().second << ' ';
        dq.pop_front();
        
        if (cnt > 0) {
            for (int j = 0; j < cnt - 1; j++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            for (int j = cnt; j < 0; j++) {
                dq.push_front(dq.back()) ;
                dq.pop_back();
            }
        }
    }

}

/*
의문점: 만약에 중간에 있는 원소를 제거해야하면 덱에서 어떻게 처리를 해야하는가?


*/