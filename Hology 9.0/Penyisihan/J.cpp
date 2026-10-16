#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
  int t; cin >> t;
  vector<int> dp(1e6+1, 0);
  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 5;
  dp[4] = 11;
  for(int i = 5; i <= 1e6; ++i){
    dp[i] = (dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4] + 5);
  }
  while(t--){
    int n; cin >> n;
    cout << dp[n] << "\n";
  }
  return 0;
}
