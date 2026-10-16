#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll random;
  cin >> random;
  vector<ll> keep;
  while (random > 0) {
    ll sisa = random % 15 % 10;
    random /= 15;
    keep.push_back(sisa);
  }
  for (int i = keep.size() - 1; i >= 0; i--) {
    cout << keep[i];
  }
  return 0;
}
