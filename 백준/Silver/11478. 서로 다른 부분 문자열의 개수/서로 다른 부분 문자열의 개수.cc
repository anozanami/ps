#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<string> set;
    string s; 
    cin >> s;

    int len = s.length();


    for (int i = 0; i < len; i++) { // 0번째 인덱스부터 끝까지 반복.
        for (int j = i; j < len; j++) { // 현재(i)인덱스부터 끝까지 반복.
            set.insert(s.substr(i, j-i+1)); // j-i+1을 하면 현재(i)부터 끝(l)까지의 길이가 된다.
        }
    }

    cout << set.size() << '\n';
}

/*
일단 쌩으로 부분 문자열을 다 구하는 건 절대 아님.
1000이면 O(n^2)까지는 가능
근데 5!이면 120 아님?
1+2+3+4+5 = n^2인데? -> 생으로 하는 게 맞는 것 같기도 하고

결국 

*/