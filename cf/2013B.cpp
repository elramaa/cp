#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    ll ans = a[n-1] - a[n-2];
    for(int i = 0; i < n - 2; ++i) ans += a[i];
    cout << ans << "\n";
  }
  return 0;
}
