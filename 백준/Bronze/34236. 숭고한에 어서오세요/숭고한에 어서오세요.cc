#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

int arr[101];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int dx = arr[1] - arr[0];
    cout << arr[n-1] + dx;
}

/*



*/