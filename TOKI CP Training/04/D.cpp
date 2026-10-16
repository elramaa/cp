#include <bits/stdc++.h>
using namespace std;

int m, n;
vector<vector<int>> board;
vector<vector<bool>> visited;

int select(int b, int k, int target){
  if(b >= m || b < 0 || k >= n || k < 0) return 0;
  if(board[b][k] != target) return 0;
  if(visited[b][k]) return 0;
  visited[b][k] = true;
  return 1 + select(b+1, k, target) + select(b, k+1, target) + select(b-1, k, target) + select(b, k-1, target);
}

int main(){
  cin >> m >> n;
  visited.resize(m);
  board.resize(m);
  for(int i = 0; i < m; ++i){
    board[i].resize(n);
    visited[i].resize(n);
    fill_n(visited[i].begin(), n, false);
    for(int j = 0; j < n; ++j){
      cin >> board[i][j];
    }
  }
  int b, k;
  cin >> b >> k;
  int selected = select(b, k, board[b][k]);
  cout << selected * (selected - 1);
  return 0;
}
