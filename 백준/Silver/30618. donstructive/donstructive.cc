#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    vector <int> v;
    cin >> n;

    for (int i = 1; i <= n; i += 2) { // 홀수
        v.push_back(i);
    }


    if (n % 2 != 0) {
        n--;
    }

    for (int i = n; i > 0; i -= 2) {
        v.push_back(i);
    }
    

    for (auto cur: v) {
        cout << cur << ' ';
    }
}

/*
순열은 1부터 N까지 N개의 정수가 각각 한 번씩 나오는 수열
4!
5!
즉 저걸 일일이 찾는거는 N!의 시간이 걸림 -> 절대 아님
규칙: 가운데로 갈수록 숫자가 많이 나오고 끝으로 갈수록 적게 나온다
즉 가운데에 큰 수들을 배치, 끝에는 작은 수 뱇
맨 앞에서부터 홀수를 오름차순 나열, 이후에 짝수 내림차순 나열

*/