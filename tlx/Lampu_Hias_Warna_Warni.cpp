#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  vector<int> cnt(26, 0);
  for(char c: s){
    cnt[c - 'A']++;
  }
  sort(cnt.rbegin(), cnt.rend());
  int min_ = min({cnt[0], cnt[1], cnt[2]});
  if(min_ == 0){
    cout << -1;
  }else{
    int ans = min_ * 3;
    if(cnt[0] > min_) ans++;
    if(cnt[1] > min_) ans++;
    if(cnt[2] > min_) ans++;
    cout << ans;
  }
  return 0;
}
