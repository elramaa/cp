#include <bits/stdc++.h>
using namespace std;
using pi = pair<int, int>;

int main(){
  int n, m, k, q; cin >> n >> m >> k >> q;
  vector<string> M(n);
  for(int i = 0; i < n; ++i) cin >> M[i];
  while(q--){
    // do bfs
    int r, c; cin >> r >> c;
    r--; c--;
    queue<pi> q;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<int>> dist(n, vector<int>(m, 0));
    q.push({r, c});
    bool found = false;
    int ans;
    while(!q.empty()){
      pi node = q.front(); q.pop();
      int rx = node.first; int cx = node.second;

      vector<pi> visitNext{{rx + 1, cx}, {rx - 1, cx}, {rx, cx + 1}, {rx, cx - 1}};
      for(auto next: visitNext){
        if(next.first < 0 || next.second < 0 || next.first >= n || next.second >= m) continue;
        if(visited[next.first][next.second]) continue;

        visited[next.first][next.second] = true;
        dist[next.first][next.second] = dist[rx][cx] + 1;
        q.push({ next.first, next.second });

        if(M[next.first][next.second] == 'X'){
          found = true;
          ans = dist[next.first][next.second];
        }
        if(found) break;
      }

      if(found) break;
    }
    cout << ans << "\n";
  }
  return 0;
}
