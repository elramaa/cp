#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n, m; cin >> n >> m;
  ll fpb = gcd(n, m);
  ll xn = n / fpb;
  ll xm = m / fpb;
  ll firstArea = n * m;
  ll newArea = (xn + n) * (xm + m); 
  ll ans = newArea - firstArea;
  cout << ans;
  return 0;
}
