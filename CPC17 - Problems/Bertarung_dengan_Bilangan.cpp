#include <bits/stdc++.h>
using namespace std;
int mod = 998244353;

int main(){
  int n, m;
  cin >> n;
  int a[n], b[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  for(int i = 0; i < n; ++i) cin >> b[i];
  cin >> m;
  int c[m], d[m];
  for(int i = 0; i < m; ++i) cin >> c[i];
  for(int i = 0; i < m; ++i) cin >> d[i];
  bool invalid = false;
  int ans = 1;
  int i = 0, j = 0;
  while(i < n && j < m){
    if(a[i] == c[j]){
      if(b[i] > d[j]) ans *= 2;
      else if(b[i] < d[j]){
        invalid = true;
        break;
      }
      i++;
      j++;
    }else if(a[i] < c[j]){
      i++;
      ans *= 2;
    }else if(a[i] > c[j]){
      invalid = true;
      break;
    }
    ans %= mod;
  }
  while(i < n){
    ++i;
    ans *= 2;
    ans %= mod;
  }
  if(invalid) cout << 0;
  else cout << ans;
  return 0;
}
