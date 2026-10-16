#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t; cin >> t;
  while(t--){
    ll n; cin >> n;
    ll ans = n * (n+1) / 2;
    ll minus = pow(2, (ll)log2(n) + 1) - 1;
    ans -= minus * 2;
    cout << ans << "\n";
  }
  return 0;
}
