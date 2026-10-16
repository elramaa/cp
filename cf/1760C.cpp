#include <bits/stdc++.h>
using namespace std;
using pi = pair<int, int>;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    pi s[n];
    for(int i = 0; i < n; ++i){
      cin >> s[i].first;
      s[i].second = i;
    }
    sort(s, s+n);
    int ans[n];
    for(int i = 0; i < n; ++i){
      int idx = s[i].second;
      ans[idx] = s[i].first - s[n-1].first;
      if(ans[idx] == 0) ans[idx] = s[i].first - s[n-2].first;
    }
    for(int i = 0; i < n; ++i) cout << ans[i] << " ";
    cout << "\n";
  }
  return 0;
}
