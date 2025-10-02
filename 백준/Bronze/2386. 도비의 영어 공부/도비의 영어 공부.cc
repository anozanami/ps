#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1) {
        char c;
        int cnt = 0;
        cin >> c;
        if (c == '#') break;

        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (tolower(s[i]) == c) {
                cnt++;
            }
        }

        cout << c << ' ' << cnt << endl;
    }
}

/*
공백을 포함해서 받으려면, 즉 개행문자 전까지의 내용을 받으려면
getline 함수를 사용하면 된다.
getline(cin, $입력 받을 문자열 변수$);

*/