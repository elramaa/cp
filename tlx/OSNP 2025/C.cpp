#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  ll nx = n;
  map<ll, ll> prime_factors;
  ll factor_cnt = 1;
  for (ll i = 2; i * i <= nx; ++i) {
    bool dividable = false;
    while (nx % i == 0) {
      dividable = true;
      nx /= i;
      prime_factors[i]++;
    }
    if (dividable)
      factor_cnt *= (prime_factors[i] + 1);
  }
  if (nx != 1) {
    prime_factors[nx]++;
    factor_cnt *= (prime_factors[nx] + 1);
  }
  pair<ll, ll> ans{-1, -1}; // first -> the prime number, second -> the factor count
  for (auto factor : prime_factors) {
    ll p = factor.first;
    ll pack_cnt = factor_cnt / (factor.second + 1);
    pack_cnt *= (factor.second + 2);
    if (pack_cnt > ans.second)
      ans = {p, pack_cnt};
  }
  cout << ans.first;
  return 0;
}
