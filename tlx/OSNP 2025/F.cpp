#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vb = vector<bool>;
using vc = vector<char>;
using pi = pair<int, int>;

int main() {
  int m, n; // m -> rows, n -> cols
  m = 2;
  cin >> n;
  vector<string> S(m);
  cin >> S[0] >> S[1];
  map<char, int> animal_cnt{{'A', 0}, {'B', 0}};
  vector<vi> M(m, vi(n));
  vector<vc> passed_by(m, vc(n, ' '));
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> M[i][j];
      if (S[i][j] == 'A' || S[i][j] == 'B')
        passed_by[i][j] = S[i][j];
      animal_cnt[S[i][j]]++;
    }
  }
  int ans = 0;
  bool impossible = false;

  for (int j = 0; j < n; ++j) {
    if (impossible)
      break;
    for (int i = 0; i < m; ++i) {

      if (S[i][j] == '.')
        continue;


      char animal = S[i][j];
      char opp;
      vector<vb> visited(m, vb(n, false));
      vector<vll> mins(m, vll(n, 1e15));

      // try to get the animal home
      // maybe, use dijkstra to find the shortest path
      //
      // cout << "Getting home " << animal << " at " << i << " " << j << "\n";

      bool is_there_opposite;
      if (animal == 'A') {
        opp = 'B';
        is_there_opposite = animal_cnt[opp] > 0;
      } else if (animal == 'B') {
        opp = 'A';
        is_there_opposite = animal_cnt[opp] > 0;
      }

      mins[i][j] = M[i][j];
      priority_queue<pair<ll, pi>> q;
      q.push({-mins[i][j], {i, j}});
      while (!q.empty()) {
        pi tile = q.top().second;
        q.pop();
        int r = tile.first;
        int c = tile.second;
        if(visited[r][c]) continue;
        visited[r][c] = true;
        if (c > 0) {
          if (passed_by[r][c - 1] != opp) {
            mins[r][c - 1] =
                min(mins[r][c - 1], mins[r][c] + M[r][c - 1]);
            passed_by[r][c - 1] = animal;
            // visited[r][c - 1] = true;
            // cout << r << " " << c-1 << " = " << mins[r][c-1] << "\n";
            q.push({-mins[r][c-1], {r, c - 1}});
          }
        }
        if (!is_there_opposite) {
          if (c < n - 1) {
            if (passed_by[r][c + 1] != opp) {
              mins[r][c + 1] = min(mins[r][c + 1],
                                            mins[r][c] + M[r][c + 1]);
              passed_by[r][c + 1] = animal;
              // visited[r][c + 1] = true;
              // cout << r << " " << c+1 << " = " << mins[r][c+1] << "\n";
              q.push({-mins[r][c+1], {r, c + 1}});
            }
          }
          if (r > 0) {
            if (passed_by[r - 1][c] != opp) {
              mins[r - 1][c] = min(mins[r - 1][c],
                                            mins[r][c] + M[r - 1][c]);
              passed_by[r - 1][c] = animal;
              // visited[r - 1][c] = true;
              // cout << r-1 << " " << c << " = " << mins[r-1][c] << "\n";
              q.push({-mins[r-1][c], {r - 1, c}});
            }
          }
          if (r < m - 1) {
            if (passed_by[r + 1][c] != opp) {
              mins[r + 1][c] = min(mins[r + 1][c],
                                            mins[r][c] + M[r + 1][c]);
              passed_by[r + 1][c] = animal;
              // visited[r + 1][c] = true;
              // cout << r+1 << " " << c << " = " << mins[r+1][c] << "\n";
              q.push({-mins[r+1][c], {r + 1, c}});
            }
          }
        }
      }

      // if(i == 1 && j == 4){
      //   for(auto vec: shortest_path){
      //     for(auto x: vec) cout << x << " ";
      //     cout << "\n";
      //   }
      // }

      // Check if it's possible to get the animal home
      if (animal == 'A' && mins[0][0] == 1e15 ||
          animal == 'B' && mins[1][0] == 1e15) {
        impossible = true;
        break;
      }
      if (animal == 'A') {
        // cout << mins[0][0] << "\n";
        ans += mins[0][0];
      } else if (animal == 'B') {
        // cout << mins[1][0] << "\n";
        ans += mins[1][0];
      }

      animal_cnt[animal]--;
    }
  }

  if (impossible)
    cout << -1;
  else
    cout << ans;
  return 0;
}
