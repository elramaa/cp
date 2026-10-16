#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k; cin >> n >> k;
  int d[n];
  vector<int> cnt(k, 0);
  for(int i = 0; i < n; ++i){
    cin >> d[i];
    d[i] %= k;
    cnt[d[i]]++;
  } 
  int ans = 0;
  for(int i = 0; i <= k / 2; ++i){
    if(i == 0 || 2*i == k){
      int p = cnt[i] / 2;
      ans += p * 2;
    }else{
      ans += min(cnt[i], cnt[k-i]) * 2;
    }
  }
  cout << ans;
  return 0;
}
