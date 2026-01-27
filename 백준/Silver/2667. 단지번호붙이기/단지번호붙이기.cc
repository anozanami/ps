#include <bits/stdc++.h>
using namespace std;
int board[26][26];
bool vis[26][26];
int n;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int bfs(int a, int b){
    queue<pair<int, int>> q;
    q.push({a, b});
    vis[a][b] = 1;
    int area = 0;
    while(!q.empty()){
        area++;
        auto cur = q.front(); q.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if(board[nx][ny] != 1 || vis[nx][ny]) continue;
            vis[nx][ny] = 1;
            q.push({nx, ny});
        }
    }
    return area;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> result;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < n; j++){
            board[i][j] = s[j] -'0';
        }
    }
    int cnt = 0;
    int num = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 0 || vis[i][j]) continue;
            num++; // 총 단지 수
            int Area = bfs(i, j);
            if(Area != 0) {
                result.push_back(Area);
                cnt++;
            }
        }
    }
    cout << num << '\n';
    sort(result.begin(),result.end());
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << '\n';
    }
    

    return 0;
}