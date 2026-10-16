#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int a[n];
    vector<ll> cnt(1e5 + 1, 0);
    vector<int> vecset;
    for(int i = 0; i < n; ++i){
      cin >> a[i];
      if(cnt[a[i]] == 0){
        vecset.push_back(a[i]);
      }
      cnt[a[i]]++;
    } 
    sort(vecset.begin(), vecset.end());

    int nx = vecset.size();
    int max_diff = vecset[nx-1] - vecset[0];
    ll ans = 0;
    int i = 0, j = nx - 1;
    if(nx == 1) ans += cnt[vecset[0]] * (cnt[vecset[0]] - 1);
    while(i < j){
      if(vecset[j] - vecset[i] == max_diff){
        ans += cnt[vecset[j]] * cnt[vecset[i]] * 2;
        j--; i++;
      }else{
        break;
      }
    }

    cout << ans << "\n";
  }
  return 0;
}
