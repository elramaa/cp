#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; cin >> n;
  ll min_ = INT64_MAX;
  ll max_ = 0;
  ll sum = 0;
  for(int i = 0; i < n; ++i){
    ll x; cin >> x;
    max_ = max(x, max_);
    min_ = min(x, min_);
    sum += x;
  }
  ll out = 0;
  while(out == min_ || out == max_ || out == sum) out++;
  cout << out;
  return 0;
}
