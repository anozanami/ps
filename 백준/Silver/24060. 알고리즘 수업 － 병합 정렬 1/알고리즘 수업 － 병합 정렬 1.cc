#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;


int k, n;
int cnt = 0;
int ans = -1;

vector<int> tmp;

void merge(vector<int> &arr, int p, int q, int r) {
    int i = p;
    int j = q + 1;
    int t = 0;
    
    // 임시 배열에 정렬된 값 저장
    while (i <= q && j <= r) {
        if (arr[i] <= arr[j]) {
            tmp[t++] = arr[i++];
        } else {
            tmp[t++] = arr[j++];
        }
    }

    while (i <= q) {
        tmp[t++] = arr[i++];
    }

    while (j <= r) {
        tmp[t++] = arr[j++];
    }

    // 임시 배열에서 원본 배열로 값 복사 및 저장 횟수 계산
    i = p;
    t = 0;
    while (i <= r) {
        if (cnt < k) {
            arr[i++] = tmp[t++];
            cnt++;
            if (cnt == k) {
                ans = arr[i - 1];
            }
        } else {
            // 이미 K번째 저장을 찾았다면 복사만 진행
            arr[i++] = tmp[t++];
        }
    }
}

void merge_sort(vector<int> &arr, int p, int r) {
    if (p < r) {
        int q = floor((p + r) / 2);
        merge_sort(arr, p, q);
        merge_sort(arr, q + 1, r);
        if (ans == -1) { // K번째 저장을 아직 찾지 못한 경우에만 병합
            merge(arr, p, q, r);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    vector<int> v(n);
    tmp.resize(n); // 전역 변수 tmp의 크기를 미리 설정
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    merge_sort(v, 0, n - 1);

    cout << ans << endl;

    return 0;
}