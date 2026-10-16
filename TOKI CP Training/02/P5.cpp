#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll b, c, d;
  cin >> b >> c >> d;
  ll count = 0;
  ll y = c - d;
  if (c == d) {
    if (b < c) {
      cout << 0;
    } else {
      count = b - c;
      cout << count;
    }
  } else {
    for (ll x = 1; x * x <= y; ++x) {
      if (y % x == 0) {
        ll px = y / x;
        if (px == x) {
          if (c % x == d)
            count++;
        } else {
          if (c % x == d)
            count++;
          if (c % px == d)
            count++;
        }
      }
    }
    cout << count;
  }
  return 0;
}
