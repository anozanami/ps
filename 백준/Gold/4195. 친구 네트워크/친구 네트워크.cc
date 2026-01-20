#include <bits/stdc++.h>
using namespace std;

int parent[200005];
int res[200005];

// 이 함수는 특정 원소가 속한 집합의 루트를 찾음.
int find(int x) {
    // 1. 내가 대장이면 (자기 자신이 부모면) 나를 반환
    if (parent[x] == x) return x;

    // 2. 내가 대장이 아니면, 내 부모의 대장을 찾으러 올라감
    // 3. 찾은 대장을 나의 부모로 직접 등록함 (이게 경로 압축!)
    return parent[x] = find(parent[x]);
    // 재귀적으로 루트를 찾은 후, 돌아오면서 경로상의 모든 노드 부모를 루트로 직접 연결
    // 만약 루트가 다르다면 둘은 같은 집합에 속해있지 않는 것임!
}


int merge(int a, int b){ // 유니온
    // 1단계: 각자의 대장(루트)을 데려온다.
    a = find(a);
    b = find(b);

    // 2단계: 둘의 대장이 다른지 확인한다. (이미 같은 팀인지 확인)
    if (a != b) { 
        // 3단계: 두 팀을 합치고 인원수를 더한다.
        parent[b] = a;      // b네 팀 대장을 a네 팀 대장 밑으로 보냄
        res[a] += res[b];   // a네 팀 인원수에 b네 팀 인원수를 합침
        res[b] = 1;
    }
    
    // 최종 팀의 인원수를 반환한다.
    return res[a];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int f; cin >> f;

        // 초기 노드세팅
        for (int i = 1; i <= 2*f; i++) {
            parent[i] = i; // 아직 어떤 집합에 속해있는지 알 수 없다.
            res[i] = 1; // 총 연결된 노드의 개수
        }
        
        int idx = 1;
        map<string, int> name;
        for (int i = 0; i < f; i++) {
            string a, b; cin >> a >> b;
            if (name.count(a) == 0) name[a] = idx++; // 새로운 이름이 등장할 때마다 1부터 시작하는 고유 번호를 부여
            if (name.count(b) == 0) name[b] = idx++; // 새로운 이름이 등장할 때마다 1부터 시작하는 고유 번호를 부여
            cout << merge(name[a], name[b]) << '\n';
        }
    }


}