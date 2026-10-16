#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; cin >> n;
  ll y[n];
  for(int i = 0; i < n; ++i) cin >> y[i];
  vector<ll> dp(n, 0);
  for(int i = 1; i < n; ++i){
    // there are 3 option
    // 1. jump directly from the previous one
    // 2. jump twice from the previous two
    // 3. or jump twice from the previous one, and jump once back 
    dp[i] = pow(y[i] - y[i-1], 2) + dp[i-1]; // 1.

    if(i > 1){
      dp[i] = min(dp[i], 3 * (ll)pow(y[i] - y[i-2], 2) + dp[i-2]);
    }
    if(i < n-1){
      dp[i] = min(dp[i], 
          3 * (ll)pow(y[i-1] - y[i+1], 2) + (ll)pow(y[i+1] - y[i], 2) + dp[i-1]
          );
    }
  }
  cout << dp[n-1];
  return 0;
}
