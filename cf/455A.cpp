#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; cin >> n;
  vector<ll> a(n);
  vector<ll> sum(100001, 0);
  vector<ll> dp(100001, 0);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
    sum[a[i]] += a[i];
  }
  dp[1] = sum[1];
  for(int i = 2; i <= 100000; ++i){
    dp[i] = max(sum[i] + dp[i-2], dp[i-1]);
  }
  cout << dp[100000];
  return 0;
}
