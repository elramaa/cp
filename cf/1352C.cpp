#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t; cin >> t;
  while(t--){
    ll n, k; cin >> n >> k;
    ll x = k / (n-1);
    ll y = k % (n-1);
    ll ans = n * x + y;
    if(y == 0) ans--;
    cout << ans << "\n";
  }
  return 0;
}
