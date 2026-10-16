#include <bits/stdc++.h>
using namespace std;

int m, n;
int board[25][25];
bool visited[25][25];

int select(int b, int k, int target){
  if(b >= m || b < 0 || k >= n || k < 0) return 0;
  if(board[b][k] != target) return 0;
  if(visited[b][k]) return 0;
  visited[b][k] = true;
  return 1 + select(b+1, k, target) + select(b, k+1, target) + select(b-1, k, target) + select(b, k-1, target);
}

int main(){
  cin >> m >> n;
  for(int i = 0; i < m; ++i){
    for(int j = 0; j < n; ++j){
      cin >> board[i][j];
    }
  }
  int best = 0;
  for(int i = 0; i < m; ++i){
    for(int j = 0; j < n; ++j){
      int selected = select(i, j, board[i][j]);
      best = max(best, selected * (selected - 1));
    }
  }
  cout << best;
  return 0;
}
