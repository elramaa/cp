#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n; cin >> n;
    int h[n];
    int min_ = INT32_MAX;
    int max_ = 0;
    for(int i = 0; i < n; ++i){
      int h;
      cin >> h;
      max_ = max(h, max_);
      min_ = min(h, min_);
    }
    int ans = max_ + 1 - min_;
    cout << ans << "\n";
  }
  return 0;
}
