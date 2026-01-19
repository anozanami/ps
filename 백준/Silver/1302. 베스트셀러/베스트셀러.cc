#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string, int> map;
    int n; cin >> n;
    string res = "";
    int cnt = 0;

    while(n--) {
        string s; cin >> s;
        map[s]++;
        if (cnt < map[s]) {
            cnt = map[s];
            res = s;
        } else if (cnt == map[s] && res > s) {
            res = s;
        }
    }   

    cout << res;
}

/*
map을 이용해서 string, int로 관리해서 max값을 출력하면 될 듯
근데 max값을 어떻게 출력하면 좋을까?
1. 쌩으로 비교
2. 함수 이용 -> 함수가 있나?

일단 1번으로 진행해보자.
그냥 string 하나 더 만들어서 여기에서 while문 돌 때 관리하면 안되나?

가장 많이 팔린 책이 여러 개일 경우에는 사전 순으로 가장 앞서는 제목을 출력한다.

*/