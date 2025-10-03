#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, a;
    int ans = 987654321;
    vector<pair<int, int>> v;
    cin >> n >> k >> a;

    for (int i = 0; i < n; i++) {
        int t, s;
        cin >> t >> s;
        v.push_back({t, s});
    }

    for (int i = 0; i < n; i++) {
        int t, s;
        int time = 0;
        int cola = k;
        t = v[i].first;
        s = v[i].second;
        while (cola > 0) {
            cola -= a * t;
            if (cola <= 0) {
                for (int cnt = 0; cnt < t; cnt++) {
                    if (cola == 0) {
                        time += (t - cnt);
                        break;
                    }
                    cola += a;
                }
            } else {
                time += t + s; // t초 먹고 s초 쉬고
            }            
        }
        ans = min(ans, time);
    }
    cout << ans;
}
/*
n명의 사람
콜라 K ml -> 가장 빨리 마시는 사람 우승
콜라를 마시다가 쉬다가 반복
모든 참가자가 1초에 마시는 양 : A ml로 동일
t_i초 동안 콜라 마심, s_i초 동앙 쉬기
0 ml -> 우승 -> 끝



*/