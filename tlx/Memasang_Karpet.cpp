#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

const int MOD = 1e9 + 7;

int main(){
  int n, m; cin >> n >> m;

  vector<vi> dp(3, vi(1e5 + 1, 0));
  // Base case
  dp[1][1] = 2;
  dp[1][2] = dp[2][1] = 6;

  for(int i = 1; i <= m; ++i){
    for(int j = 1; j <= n; ++j){
      if(i == 1 && j == 2 || i == 2 && j == 1 || i == 1 && j == 1) continue;
      dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % MOD;
      if(j >= 2) dp[i][j] = (dp[i][j] + dp[i][j-2]) % MOD;
      if(i >= 2) dp[i][j] = (dp[i][j] + dp[i-2][j]) % MOD;
    }
  }

  cout << dp[m][n];
  return 0;
}
