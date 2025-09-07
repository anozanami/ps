#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n < 2) {
        int price;
        cin >> price;
        cout << 0 << '\n';
        return 0;
    }

    int current_price;
    int max_profit = 0;
    int min_price;

    cin >> min_price;

    for (int i = 1; i < n; i++) {
        cin >> current_price;
        max_profit = max(max_profit, current_price - min_price);
        min_price = min(min_price, current_price);
    }

    cout << max_profit << '\n';

    return 0;
}