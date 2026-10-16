#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N, W; cin >> N >> W;
  int w[N+1], v[N+1];
  for(int i = 1; i <= N; ++i) cin >> w[i] >> v[i];
  vector<vector<ll>> dp(N+1, vector<ll>(W+1, 0));
  for(int i = 1; i <= N; ++i){
    for(int j = 1; j <= W; ++j){
      dp[i][j] = dp[i-1][j];
      if(j >= w[i]) dp[i][j] = max(dp[i][j], dp[i-1][j - w[i]] + v[i]);
    }
  }
  cout << dp[N][W];
  return 0;
}
