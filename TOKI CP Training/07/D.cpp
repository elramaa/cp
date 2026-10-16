#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n+1], b[n+1];
  for(int i = 1; i <= n; ++i) cin >> a[i];
  for(int i = 1; i <= n; ++i) cin >> b[i];

  vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= n; ++j){
      if(a[i] == b[j]) dp[i][j] = dp[i-1][j-1] + 1;
      else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    }
  }

  cout << dp[n][n];
  return 0;
}
