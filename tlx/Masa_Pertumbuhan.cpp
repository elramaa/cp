#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n, m, k; cin >> n >> m >> k;
  ll A[n];
  for(int i = 0; i < n; ++i) cin >> A[i];
  sort(A, A+n);
  ll ans = 0;
  for(int i = 0; i < n; ++i){
    if(A[i] > m + k){
      m = A[i];
      ans++;
    }
  }
  cout << ans;
  return 0;
}
