#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k, q;
    cin >> n >> k >> q;
    int A[n];
    for(int i = 0; i < n; ++i) cin >> A[i];
    ll ans = 0;
    for(int i = 0, j = 0; i < n && j < n;){
      if(A[i] > q) j = ++i;
      else {
        while(A[j] <= q && j < n){
          int len = j - i + 1;
          if(len >= k) ans += (ll)len - k + 1;
          ++j;
        }
        i = j;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
