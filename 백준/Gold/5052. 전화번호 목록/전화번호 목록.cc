#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    
    while(t--) {
        int n; cin >> n;
        bool ans = true;
        vector<string> v;
        for (int i = 0; i < n; i++) {
            string num; cin >> num;
            v.push_back(num);
        }

        sort(v.begin(), v.end()); // 정렬

        for (int i = 0; i < v.size()-1; i++) {
            string a = v[i];
            string b = v[i+1];
            int cnt = 0;

            for (int j = 0; j < a.length(); j++) {
                if (a[j] == b[j]) {
                    cnt++;
                }
            }
            if (cnt == a.length()) {
                ans = false;
                break;
            }
        }
        if (ans) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }        
    }
}

/*
전화번호 목록이 일관성을 유지하려면, 한 번호가 다른 번호의 접두어인 경우가 없어야 한다.
긴급전화: 911
상근: 97625999
선영: 91125426

이 경우에 선영이에게 전화를 걸 수 있는 방법이 없다. 
전화기를 들고 선영이 번호의 처음 세 자리를 누르는 순간 바로 긴급전화가 걸리기 때문이다.
따라서, 이 목록은 일관성이 없는 목록이다.

O(n^2)은 안 됨
nlogn에 끝내야 함

911이면 앞에서부터 맞춰보기는 해야하는 거 아님?
일관성 있다 = set이나 map의 size와 num이 동일하다
911과 9112는 결국 겹치는 것임 -> size와 num이 동일하지 않음
전화번호가 10자리니까 1~10까지 늘려가면서 for문을 돌아도 괜찮을 것 같음

-> 문자열을 sort() 한 뒤, 현재 문자열을 기준으로 삼고 
현재 문자열이 바로 다음 문자열의 접두어가 되는지만 판단하면 시간 안에 해결할 수 있다고 한다.

근데 길이 기준으로 굳이 안해도 되나? -> 괜찮을 것 같기는 함 일단 해보자.
*/