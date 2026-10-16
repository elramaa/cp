#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calculate_max_box(ll s, ll p, ll l) { return (ll)(s / p) * (ll)(s / l); }

int main() {
  ll n, p, l;
  cin >> n >> p >> l;
  ll s;
  s = sqrt(n * p * l);
  if (calculate_max_box(s, p, l) >= n) {
    while (calculate_max_box(s - 1, p, l) >= n) {
      s--;
    }
    cout << s;
  } else {
    while(calculate_max_box(s, p, l) < n) s++;
    cout << s;
  }
  return 0;
}
