#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n, a, b;
  cin >> n >> a >> b;
  ll kpk = a / gcd(a, b) * b;
  ll ans = (n / a) + (n / b) - (n / kpk);
  cout << ans;
  return 0;
}
