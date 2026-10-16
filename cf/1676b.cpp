#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    ll A[n];
    ll min_ = INT32_MAX;
    for(int i = 0; i < n; ++i){
      cin >> A[i];
      min_ = min(A[i], min_);
    }
    ll ans = 0;
    for(int i = 0; i < n; ++i){
      ans += A[i] - min_;
    }
    cout << ans << "\n";
  }
  return 0;
}
