#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int w[k+1], h[k+1];
  for(int i = 1; i <= k; ++i) cin >> w[i] >> h[i];
  vector<vector<int>> dp(k+1, vector<int>(n+1, 0));
  vector<vector<pair<int, int>>> prev(k+1, vector<pair<int, int>>(n+1, {0, 0}));

  for(int i = 1; i <= k; ++i){
    for(int j = 1; j <= n; ++j){
      dp[i][j] = dp[i-1][j]; // don't pick current rock
      prev[i][j] = prev[i-1][j];
      if(j - w[i] >= 0){
        dp[i][j] = max(dp[i][j], h[i] + dp[i-1][j - w[i]]); // pick current rock
      }
    }
  }

  // for(int node = prev[k][n]; node != 0; node = prev[node.first][node.second]){
  //
  // }
  return 0;
}
