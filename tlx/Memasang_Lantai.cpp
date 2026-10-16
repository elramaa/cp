#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e6;

int main(){
  int n; cin >> n;
  vector<int> dp(1001, 1);
  dp[3] = 2;
  for(int i = 4; i <= n; ++i){
    dp[i] = (dp[i-1] + dp[i-3]) % MOD;
  }
  cout << dp[n];
  return 0;
}
