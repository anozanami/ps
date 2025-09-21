#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }

        if (a > b) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        } 
    }

}

/*

*/