#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int cnt = 0;
    set<string> chat;
    
    while(n--) {
        string s; cin >> s;
        if (s == "ENTER") {
            cnt += chat.size();
            set<string> tmp;
            chat = tmp;
        } else {
            chat.insert(s);
        }
    }

    cout << cnt + chat.size(); 
    // 그냥 cnt만 하게 되면 ENTER 이후에 이루어진 채팅의 수를 더하지 못 함

}

/*
그니까 ENTER 이후에 set의 size를 계산
ENTER가 입력되면 초기화 -> 모든 원소들을 지우기 or 새롭게 생성
set 초기화 방법 : 새로운 set을 선언하고 덮어씌우기

*/