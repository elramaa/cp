#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vb = vector<bool>;
using pi = pair<int, int>;

vector<pi> select_best(vector<vi> &M, int &m, int &n) {
  vector<vb> visited(m, vb(n, false));
  int best_cnt = 0;
  vector<pi> best_connections;

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (visited[i][j])
        continue;
      int cnt = 0;
      vector<pi> conn;

      // Do BFS to calculate the best pos
      queue<pi> q;
      q.push({i, j});
      visited[i][j] = true;
      while (!q.empty()) {
        pi pos = q.front();
        q.pop();
        int pos_y = pos.first;
        int pos_x = pos.second;
        int pos_val = M[pos_y][pos_x];

        conn.push_back({pos_y, pos_x});
        cnt++;

        vector<pi> move_to{{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

        for (auto move : move_to) {
          int yy = move.first;
          int xx = move.second;
          if (pos_y + yy < 0 || pos_x + xx < 0 || pos_y + yy >= m ||
              pos_x + xx >= n)
            continue;
          if (M[pos_y + yy][pos_x + xx] == pos_val) {
            if (visited[pos_y + yy][pos_x + xx])
              continue;
            q.push({pos_y + yy, pos_x + xx});
            visited[pos_y + yy][pos_x + xx] = true;
          }
        }
      }

      if (cnt > best_cnt) {
        best_cnt = cnt;
        best_connections = conn;
      }
    }
  }

  return best_connections;
}

int main() {
  int m, n;
  cin >> m >> n;
  vector<vi> M(m, vi(n));

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j)
      cin >> M[i][j];
  }

  vector<pi> connections =
      select_best(M, m, n); // return the connection from the best pos
  // remove all connected pos
  for (auto conn : connections) {
    M[conn.first][conn.second] = 0;
  }

  for (int i = 0; i < n; ++i) {
    for (int j = m - 2; j >= 0; --j) {
      if (M[j][i] == 0)
        continue;
      for (int k = j; k < m - 1; ++k) {
        if (M[k + 1][i] != 0)
          break;
        swap(M[k + 1][i], M[k][i]);
      }
    }
  }

  for (auto col : M) {
    for (auto x : col) {
      if (x == 0)
        cout << ".";
      else
        cout << x;
      cout << " ";
    }
    cout << "\n";
  }
  return 0;
}
