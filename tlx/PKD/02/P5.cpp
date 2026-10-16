#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll b, c, d; cin >> b >> c >> d;
  ll Cx = c - d;
  ll ans = 0;
  for(ll p = 1; p * p <= Cx; ++p){
    if(Cx % p == 0){
      if(p <= b && c % p == d) ans++;
      ll q = Cx / p;
      if(q != p && q <= b && c % q == d) ans++;
    }
  }
  if(Cx == 0) ans = max(b - d, (ll)0);
  cout << ans;
  return 0;
}
