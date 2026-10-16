#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int a[n], b[m];
  for(int i = 0; i < n; ++i) cin >> a[i];
  for(int i = 0; i < m; ++i) cin >> b[i];
  sort(a, a+n);
  sort(b, b+m);
  for(int i = 0, j = 0; i < n && j < m;){
    if(a[i] == b[j]){
      cout << a[i];
      return 0;
    }else if(a[i] < b[j]){
      i++;
    }else if(a[i] > b[j]){
      j++;
    }
  }
  int ans = min(a[0] * 10 + b[0], b[0] * 10 + a[0]);
  cout << ans;
  return 0;
}
