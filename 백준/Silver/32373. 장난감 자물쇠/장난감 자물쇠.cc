#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    int ans = 0;
    vector<int> v;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    for (int i = 0; i < k; i++) {
        vector<int> cur;
        vector<int> goal;
        
        for (int j = i; j < n; j += k) {
            cur.push_back(v[j]);
            goal.push_back(j); // 이 부분 v[j]라고 하면 안 됨. 0-index에 해당하는 인덱스 값이 들어가야 한다리..
        }

        sort(cur.begin(), cur.end());
        if (cur != goal) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

}

/*
O(n)
N개의 정수로 구성된 수열을 오름차순으로 나열해야 함 
이 수열에는 중복된 수 없이 0부터 N-1까지의 정수가 각각 하나씩 존재
결국 오름차순을 만족하도록 수열을 수정해야 하는 것인데
바꿀 수 있는 숫자가 있는 것임
일단 무조건적으로 숫자가 고정되어 있음 0-index에 해당하는 i가 숫자임

입력
특정 위치에 도달
i번째 인덱스의 숫자가 i인 경우 -> 패스, 
아닌 경우 -> 앞뒤 k만큼의 거리에서의 인덱스와 비교 -> i가 있으면 바꾸기 

만약 k만큼의 거리를 여러 번 바꿔서 가능하다면 ㅇㅋ?? -> 이게 문제인 것 같음
*/