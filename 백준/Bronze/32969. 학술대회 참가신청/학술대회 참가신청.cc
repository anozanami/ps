#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int ans = 0; // 1 : 디지털, 2 : 공공
    cin >> s;
    
    if (s.find("social") != string::npos) { // 찾는 문자가 없을 경우는 string::npos를 리턴
        ans = 1;
    }

    if (s.find("history") != string::npos) {
        ans = 1;
    }

    if (s.find("language") != string::npos) {
        ans = 1;
    }

    if (s.find("literacy") != string::npos) {
        ans = 1;
    }

    if (s.find("bigdata") != string::npos) {
        ans = 2;
    }

    if (s.find("public") != string::npos) {
        ans = 2;
    }   
    
    if (s.find("society") != string::npos) {
        ans = 2;
    } 

    if (ans == 1) {
        cout << "digital humanities";
    } else {
        cout << "public bigdata";
    }

}

/*

*/