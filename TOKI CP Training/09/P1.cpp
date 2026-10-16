#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<int>> maze(n+1, vector<int>(m+1));
  pair<int, int> exit_pos;
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= m; ++j){
      cin >> maze[i][j];
      if(maze[i][j] == 0 && (i == 1 || i == n || j == 1 || j == m)) exit_pos = {i, j};
    }
  }
  int a, b; // start pos
  cin >> a >> b;

  // do bfs until we meet exit_pos
  queue<pair<int, int>> q;
  vector<vector<bool>> visited(n+1, vector<bool>(m+1, false));
  vector<vector<int>> dist(n+1, vector<int>(m+1, -1));
  dist[a][b] = 1;
  q.push({a, b});
  while(!q.empty()){
    auto node = q.front();
    int r = node.first;
    int c = node.second;
    q.pop();
    if(r == exit_pos.first && c == exit_pos.second) break;
    int dr[] = {+1, -1, 0, 0};
    int dc[] = {0, 0, +1, -1};
    for(int i = 0; i < 4; ++i){
      int nr = r + dr[i];
      int nc = c + dc[i];
      if(nr == 0 || nr > n || nc == 0 || nc > m) continue;
      if(visited[nr][nc]) continue;
      if(maze[nr][nc] == -1) continue;
      visited[nr][nc] = true;
      dist[nr][nc] = dist[r][c] + 1;
      q.push({nr, nc});
    }
  }
  cout << dist[exit_pos.first][exit_pos.second];
  return 0;
}
