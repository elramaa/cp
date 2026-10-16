#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n; cin >> n;
    int cnt[3] = {0};
    for(int i = 0; i < n; ++i){
      int w; cin >> w;
      cnt[w]++;
    }
    int ans = cnt[0];
    int min_ = min(cnt[1], cnt[2]);
    ans += min_;
    cnt[1] -= min_; cnt[2] -= min_;
    ans += cnt[1]/3;
    ans += cnt[2]/3;
    cout << ans << "\n";
  }
  return 0;
}
