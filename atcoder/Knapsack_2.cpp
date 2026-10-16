#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, W; cin >> N >> W;
  int w[N+1], v[N+1];
  int max_value = 0;
  for(int i = 1; i <= N; ++i){
    cin >> w[i] >> v[i];
    max_value += v[i];
  }
  vector<vector<int>> dp(N+1, vector<int>(max_value+1, 1e9 + 1));
  for(int i = 0; i <= N; ++i) dp[i][0] = 0;
  for(int i = 1; i <= N; ++i){
    for(int j = 1; j <= max_value; ++j){
      dp[i][j] = dp[i-1][j];
      if(j >= v[i]) dp[i][j] = min(dp[i][j], dp[i-1][j - v[i]] + w[i]);
    }
  }
  int max_ = 0;
  for(int i = 0; i <= max_value; ++i){
    if(dp[N][i] <= W) max_ = max(i, max_);
  }
  cout << max_;
  return 0;
}
