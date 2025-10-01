#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    string s;
    cin >> k >> s;
    
    for (int i = 0; i < s.length(); i += k) {
        cout << s[i];
    }
}

/*
 
4시간의 벽이란, 고속철도와 항공편이 경합할 때 
고속철도가 4시간 이하로 주파하는 구간에서는 고속철도가 우위에 서고 
그렇지 않으면 항공편이 우위에 서는 경향

역 a -> 역 b : Sab
역 a -> 공항 a : Ma
공항 a -> 공항 b : Fab
공항 b -> 역 b : Mb

*/