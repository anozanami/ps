#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    for (int k = 1; k <= n; k++){
        int m;
        int ans = 0; // 이익을 ans로 저장
        int best = 251; // 최저 구매 가격을 추적하기 위한 변수
        int idx1 = 0;
        int idx2 = 0;
        vector<int> v(12);
        
        cin >> m;
        for (int i = 0; i < 12; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < 12; i++) {
            for (int j = i + 1; j < 12; j++) {
                int buy = v[i];
                int sell = v[j];
                
                // 구매할 수 있는 주식이 없는 경우 건너뜀
                if (m < buy) continue;
                
                int stock = m / buy;
                int profit = stock * (sell - buy);

                if (profit > ans) {
                    ans = profit;
                    idx1 = i + 1;
                    idx2 = j + 1;
                    best = buy;
                } else if (profit == ans) {
                    // 이익이 같을 때, 더 낮은 구매 가격을 가진 경우 갱신
                    if (buy < best) {
                        idx1 = i + 1;
                        idx2 = j + 1;
                        best = buy;
                    }
                }
            }
        }

        cout << "Case #" << k << ": ";
        if (ans <= 0) {
            cout << "IMPOSSIBLE" << endl;
        } else {
            cout << idx1 << ' ' << idx2 << ' ' << ans << endl;
        }
    }

    return 0;
}