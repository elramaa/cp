#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll e = a * d + b * c;
  ll f = b * d;
  ll fpb = gcd(e, f);
  e /= fpb;
  f /= fpb;

  cout << e << " " << f;
  return 0;
}
