#include <bits/stdc++.h>
using namespace std;
using pi = pair<int, int>;
using vi = vector<int>;
using vb = vector<bool>;

int main(){
  int n, m; cin >> n >> m;
  vector<string> grid(n);
  for(int i = 0; i < n; ++i) cin >> grid[i];
  int r1, c1, r2, c2;
  cin >> r1 >> c1;
  cin >> r2 >> c2;
  r1--; c1--;
  r2--; c2--;
  // bfs
  bool yes = false;
  queue<pair<pi, pi>> q;
  vector<vb> visited(n, vb(m, false));
  q.push({{r1, c1}, {-1, -1}});
  while(!q.empty()){
    pi node = q.front().first;
    pi prev = q.front().second;
    q.pop();
    int r = node.first; int c = node.second;
    if(visited[r][c]) continue;
    if(r == r2 && c == c2){
      // cout << grid[r][c] << "\n";
      // cout << prev.first << " " << prev.second << "\n";
      // cout << grid[prev.first][prev.second] << "\n";
      if(r > 0 && prev.first != r - 1){
        if(grid[r-1][c] == '.') yes = true;
      } 
      if(c > 0 && prev.second != c - 1){
        if(grid[r][c-1] == '.') yes = true;
      }
      if(r < n - 1 && prev.first != r + 1){
        if(grid[r+1][c] == '.') yes = true; 
      }
      if(c < m - 1 && prev.second != c + 1){
        if(grid[r][c+1] == '.') yes = true;
      }
      if(prev.first != -1 && prev.second != -1 && grid[r][c] == 'X') yes = true;
      break;
    }
    visited[r][c] = true;
    if(r > 0){
      if(grid[r-1][c] != 'X' || (r - 1 == r2 && c == c2)) q.push({{r-1, c}, {r, c}});
    }
    if(c > 0){
      if(grid[r][c-1] != 'X' || (r == r2 && c - 1 == c2)) q.push({{r, c-1}, {r, c}});
    }
    if(r < n-1){
      if(grid[r+1][c] != 'X' || (r + 1 == r2 && c == c2)) q.push({{r+1, c}, {r, c}});
    }
    if(c < m-1){
      if(grid[r][c+1] != 'X' || (r == r2 && c + 1 == c2)) q.push({{r, c+1}, {r, c}});
    }
  }

  if(yes) cout << "YES";
  else cout << "NO";
  return 0;
}
