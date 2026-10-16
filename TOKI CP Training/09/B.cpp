#include <bits/stdc++.h>
using namespace std;

int c, r;

int count_area(string G[], int row, int col) {
  int area = 0;
  stack<pair<int, int>> st;
  vector<vector<bool>> visited(r, vector<bool>(c, false));
  st.push({row, col});
  visited[row][col] = true;
  while (!st.empty()) {
    pair<int, int> node = st.top(); // first -> row, second -> column
    int y = node.first;
    int x = node.second;
    st.pop();
    area++;
    if (y - 1 >= 0 && !visited[y - 1][x] && G[y - 1][x] != '#') {
      st.push({y - 1, x});
      visited[y - 1][x] = true;
    }
    if (y + 1 < r && !visited[y + 1][x] && G[y + 1][x] != '#') {
      st.push({y + 1, x});
      visited[y + 1][x] = true;
    }
    if (x - 1 >= 0 && !visited[y][x - 1] && G[y][x - 1] != '#') {
      st.push({y, x - 1});
      visited[y][x - 1] = true;
    }
    if (x + 1 < c && !visited[y][x + 1] && G[y][x + 1] != '#') {
      st.push({y, x + 1});
      visited[y][x + 1] = true;
    }
  }
  return area;
}

int main() {
  cin >> c >> r;
  string G[r];
  pair<int, int> k_pos{-1, -1}, b_pos{-1, -1};
  for (int i = 0; i < r; ++i) {
    cin >> G[i];
    if (k_pos.first == -1 || b_pos.first == -1) {
      for (int j = 0; j < c; ++j) {
        if (G[i][j] == 'B')
          b_pos = {i, j};
        if (G[i][j] == 'K')
          k_pos = {i, j};
      }
    }
  }

  int luas_b = count_area(G, b_pos.first, b_pos.second);
  int luas_k = count_area(G, k_pos.first, k_pos.second);

  if (luas_b > luas_k)
    cout << "B " << luas_b - luas_k;
  else if (luas_b < luas_k)
    cout << "K " << luas_k - luas_b;
  else
    cout << "SERI";

  return 0;
}
