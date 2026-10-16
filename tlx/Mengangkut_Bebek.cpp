#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int main(){
  int k; cin >> k;
  // vector<pll> kandang(k);
  vector<pair<ll, ll>> kandang(k);
  for(int i = 0; i < k; ++i) cin >> kandang[i].second; 
  for(int i = 0; i < k; ++i) cin >> kandang[i].first; // taruh harga di first
  sort(kandang.begin(), kandang.end());

  int n; cin >> n;
  vector<ll> b(n);
  for(int i = 0; i < n; ++i) cin >> b[i];
  sort(b.rbegin(), b.rend());
  int j = 0;
  ll ans = 0;
  for(int i = 0; i < n; ++i){
    ans += kandang[j].first * b[i];
    kandang[j].second--;
    if(kandang[j].second == 0) j++;
  }
  cout << ans;
  return 0;
}
