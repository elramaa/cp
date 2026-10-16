#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  double p[n+1];
  for(int i = 1; i <= n; ++i) cin >> p[i];
  vector dp(n+1, vector<double>(n+1, 0));
  dp[0][0] = 1;
  double p_total = 0;
  for(int i = 1; i <= n; ++i){
    for(int j = 0; j <= i; ++j){
      dp[i][j] += (1 - p[i]) * dp[i-1][j];
      if(j > 0) dp[i][j] += p[i] * dp[i-1][j-1];
      if(i == n && j > (n - j)) p_total += dp[i][j];
    }
  }
  cout << fixed << setprecision(9) << p_total;
  return 0;
}
