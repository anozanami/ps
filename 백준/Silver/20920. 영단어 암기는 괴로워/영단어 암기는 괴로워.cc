#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string, int> const& l, pair<string, int> const& r) {
    // 1순위: 빈도수가 높은 순 (내림차순)
    if (l.second != r.second) {
        return l.second > r.second;
    }
    // 2순위: 단어의 길이가 긴 순 (내림차순)
    if (l.first.length() != r.first.length()) { // 오타 수정: l vs r
        return l.first.length() > r.first.length();
    }
    // 3순위: 알파벳 사전 순 (오름차순)
    return l.first < r.first; // 사전 순이므로 < 사용
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    unordered_map<string, int> map;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.length() >= m) {
            map[s]++;
        }
    }

    // map의 데이터를 vector로 복사
    vector<pair<string, int>> v(map.begin(), map.end());
    
    // 커스텀 비교 함수를 이용한 정렬
    sort(v.begin(), v.end(), comp);

    for (const auto& cur : v) {
        cout << cur.first << '\n';
    }

    return 0;
}