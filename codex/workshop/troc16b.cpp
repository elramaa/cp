#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  int a[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  sort(a, a+n);
  int ans = a[n-1] - a[0];
  for(int i = 1; i < n; ++i) ans = min(ans, (a[i-1] + m) - a[i]); 
  cout << ans;
  return 0;
}
