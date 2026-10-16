#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    int l = a[0], r = a[n-1];
    int ans = gcd(l, r);
    for(int i = 1; i < n - 1; ++i){
      int newGcd = gcd(gcd(l, a[i]), r);
      ans = max(ans, newGcd);
    }
    cout << ans << "\n";
  }
  return 0;
}
