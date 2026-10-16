#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int A[n];
  for(int i = 0; i < n; ++i) cin >> A[i];
  int k;
  cin >> k;

  vector<int> dp(k+1, INT32_MAX);
  dp[0] = 0; 
  for(int i = 1; i <= k; ++i){
    for(int c : A){
      if(i-c >= 0 && dp[i-c] != INT32_MAX) dp[i] = min(dp[i], 1 + dp[i-c]);
    }
  }

  cout << (dp[k] == INT32_MAX ? -1 : dp[k]);
  return 0;
}
