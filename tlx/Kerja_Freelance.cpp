#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main(){
  int m; 
  cin >> m;
  int S[m+1], E[m+1];
  ll P[m+1];
  int n = 0;
  for(int i = 1; i <= m; ++i){
    cin >> S[i] >> E[i] >> P[i];
    n = max(n, E[i]);
  }
  vector<vll> dp(m+1, vll(n+1, 0));
  for(int i = 1; i <= m; ++i){
    for(int j = 1; j <= n; ++j){
      dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      if(E[i] == j){
        dp[i][j] = max(dp[i][j], P[i] + dp[i-1][S[i] - 1]);
      }
    }
  }
  cout << dp[m][n];
  return 0;
}
