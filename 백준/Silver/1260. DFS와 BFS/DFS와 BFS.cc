#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
using ll = long long;
vector<vector<int>> graph(1001);
bool vis[1001];
int n, m, v;
void dfs(int start) {
    vis[start] = true;
    cout << start << ' ';
    for (int i = 0; i < graph[start].size(); i++) {
        int nxt = graph[start][i]; // 다음으로 방문하게 될 노드
        if (vis[nxt]) continue; // 이미 방문했으면 패스
        dfs(nxt); // 방문 안 했으면 다음 노드로 방문 ㄱㄱㄱ
    }
}

void bfs(int start) { 
    queue<int> q;
    q.push(start);
    vis[start] = true;
    while(!q.empty()) {
        auto cur = q.front(); q.pop();
        cout << cur << ' ';
        for (int i = 0; i < graph[cur].size(); i++) {
            int nxt = graph[cur][i]; // 다음으로 방문하게 될 노드
            if (vis[nxt]) continue; // 이미 방문했으면 넘어가라.
            vis[nxt] = true;
            q.push(nxt); 
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        // undirected graph의 입력
    }

    for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(v);
    cout << '\n';
    memset(vis, false, sizeof(vis));
    bfs(v);

    return 0;
}