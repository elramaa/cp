#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll b, c, d;
  cin >> b >> c >> d;
  ll Cx = c - d;
  ll ans = 0;
  for(ll p = 1; p * p <= Cx && p <= b; ++p){
    if(Cx % p == 0){
      if(c % p == d) ans++;
      ll q = Cx / p;
      if(q <= b && c % q == d && q != p) ans++;
    }
  }
  if(c == d) ans = max((ll)0, b - c);
  cout << ans;
  return 0;
}
