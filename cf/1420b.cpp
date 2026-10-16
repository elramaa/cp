#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    ll A[n];
    vector<ll> bits(33, 0);
    for (int i = 0; i < n; ++i) {
      cin >> A[i];
      ll x = (ll)(log2(A[i]) + 1);
      bits[x]++;
    }
    ll count = 0;
    for (int i = 0; i < n; ++i) {
      ll x = (ll)(log2(A[i]) + 1);
      count += --bits[x];
    }
    cout << count << "\n";
  }
  return 0;
}
