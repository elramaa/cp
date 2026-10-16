#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n, k; cin >> n >> k;
  ll d[n];
  for(int i = 0; i < n; ++i) cin >> d[i];
  ll ans = 1 + k; // init by buying on the first day of d[]
  for(int i = 1; i < n; ++i){
    if(d[i] - d[i-1] < 1 + k){
      ans += d[i] - d[i-1];
    }else{
      ans += 1 + k;
    }
  }
  cout << ans;
  return 0;
}
