#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n, x, y;
    cin >> n >> x >> y;

    ll z = x * y / gcd(x, y);
    ll overlap = n / z;
    ll left = (n / x - overlap) * (2 * n + ((n / x - overlap) - 1) * (-1)) / 2;
    ll right = (n / y - overlap) * (2 + ((n / y - overlap) - 1) * 1) / 2;

    cout << left - right << "\n";
  }
  return 0;
}
