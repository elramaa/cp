#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, k; cin >> n >> m >> k;
  int A[n];
  for(int i = 0; i < n; ++i) cin >> A[i];
  sort(A, A+n);
  for(int i = 0; i < n; ++i) cout << A[i] << " ";
  cout << "\n";
  int l, r, ans, sold;
  l = r = 0;
  ans = 0;
  sold = 0;
  while(r < n && l < n){
    if(A[r] - A[l] <= k){
      r++;
    }else{
    }
  }
  if(sold != n) ans = -1;
  cout << ans;
  return 0;
}
