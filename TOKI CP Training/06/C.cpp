#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n, d;
  cin >> n >> d;
  pair<ll, ll> C[n];
  for(int i = 0; i < n; ++i) cin >> C[i].first >> C[i].second;
  sort(C, C+n);
  ll sum = 0;
  ll cnt = 0;
  for(auto x : C){
    ll left = d - sum;
    ll affordable = min(x.second, left/x.first);
    sum += x.first * affordable;
    cnt += affordable;
  }
  cout << cnt;
  return 0;
}
