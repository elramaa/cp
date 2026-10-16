#include <bits/stdc++.h>
using namespace std;

int m, n;
int board[25][25];
bool visited[25][25];
bool mark[25][25];

int select(int b, int k, int target) {
  if (b >= m || b < 0 || k >= n || k < 0)
    return 0;
  if (board[b][k] != target)
    return 0;
  if (visited[b][k])
    return 0;
  visited[b][k] = true;
  return 1 + select(b + 1, k, target) + select(b, k + 1, target) +
         select(b - 1, k, target) + select(b, k - 1, target);
}

int mark_and_select(int b, int k, int target) {
  if (b >= m || b < 0 || k >= n || k < 0)
    return 0;
  if (board[b][k] != target)
    return 0;
  if (mark[b][k])
    return 0;
  mark[b][k] = true;
  return 1 + mark_and_select(b + 1, k, target) +
         mark_and_select(b, k + 1, target) + mark_and_select(b - 1, k, target) +
         mark_and_select(b, k - 1, target);
}

int main() {
  cin >> m >> n;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> board[i][j];
    }
  }
  int best = 0;
  pair<int, int> best_pos{-1, -1};
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      int selected = select(i, j, board[i][j]);
      int point = selected * (selected - 1);
      if (point > best) {
        best = point;
        best_pos = {i, j};
      }
    }
  }
  mark_and_select(best_pos.first, best_pos.second,
                  board[best_pos.first][best_pos.second]);
  for (int col = 0; col < n; ++col) {
    cout << col;
    for (int l = m - 2, r = m - 1; l > 0 && r > 0; ) {
      if (!mark[l][col] && mark[r][col]) {
        board[r][col] = board[l][col];
        board[l][col] = -1;
      } 
      if (!mark[r][col]) {
        --r;
      }
      if (mark[l][col]) {
        --l;
      }
    }
  }
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (board[i][j] == -1)
        cout << ". ";
      else
        cout << board[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}
