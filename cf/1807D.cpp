#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t; cin >> t;
  while(t--){
    int n, q; cin >> n >> q;
    ll presum[n+1];
    presum[0] = 0;
    for(int i = 1; i <= n; ++i){
      cin >> presum[i];
      presum[i] += presum[i-1];
    }
    while(q--){
      int l, r, k; cin >> l >> r >> k;
      ll sum = presum[n] - (presum[r] - presum[l-1]) + k * (r - l + 1);
      cout << (sum % 2 == 0 ? "NO" : "YES") << "\n";
    }
  }
  return 0;
}
