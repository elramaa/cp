#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t; cin >> t;
  while(t--){
    ll x, y, z, k; cin >> x >> y >> z >> k;
    ll ans = 0;
    for(ll a = 1; a <= x; ++a){
      if(k % a == 0){
        for(ll b = 1; b <= y; ++b){
          ll ka = k / a;
          if(ka % b == 0){
            ll c = ka / b;
            if(c <= z) ans = max(ans, (x - a + 1) * (y - b + 1) * (z - c + 1)); 
          }
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
