#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t; cin >> t;
  while(t--){
    int n, x; cin >> n >> x;
    ll sum = 0;
    ll min_ = 0, max_ = 0;
    for(int i = 0; i < n; ++i){
      ll a; cin >> a;
      sum += a;
      max_ += (a + x - 1) / x;
    }
    min_ = (sum + x - 1) / x;
    cout << min_ << " " << max_ << "\n";
  }
  return 0;
}
