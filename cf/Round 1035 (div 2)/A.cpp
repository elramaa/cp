#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a < b) {
      ll ans1 = x * (b - a);
      if (a & 1) {
        cout << min(ans1, y * ((b - a + 1) / 2) + x * ((b - a) / 2));
      } else if (!(a & 1)) {
        cout << min(ans1, y * ((b - a) / 2) + x * ((b - a + 1) / 2));
      }
    } else if (a > b) {
      if (a & 1 && b == a - 1) {
        cout << y;
      } else {
        cout << -1;
      }
    } else if (a == b) {
      cout << 0;
    }
    cout << "\n";
  }
  return 0;
}
