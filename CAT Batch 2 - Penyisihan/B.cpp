#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n, t; cin >> n >> t;
  pair<ll, ll> games[n];
  for(int i = 0; i < n; ++i){
    cin >> games[i].first >> games[i].second;
  }
  sort(games, games+n);
  ll cnt1 = t / (games[0].first + games[0].second) - games[0.second];
  // cout << cnt;
  return 0;
}
