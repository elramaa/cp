#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;
    int a[n];
    vector<int> cnt(m+1, 0);
    vector<int> greaterOrEqual(m+1, 0);
    for(int i = 0; i < n; ++i){
      cin >> a[i];
      cnt[a[i]]++;
    }

    greaterOrEqual[m] = cnt[m];
    for(int i = m - 1; i >= 1; --i){
      greaterOrEqual[i] = greaterOrEqual[i+1] + cnt[i];
    }

    int ans = 0;
    for(int i = 1; i <= m; ++i){
      int newAns = greaterOrEqual[i];
      if(i * 2 <= m) newAns += cnt[i*2];
      ans = max(ans, newAns);
    }

    cout << ans << "\n";
  }
  return 0;
}
