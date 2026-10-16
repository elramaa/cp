#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, k; cin >> n >> k;
    int a[n];
    int even_cnt = 0;
    int prod = 1;
    for(int i = 0; i < n; ++i){
      int x; cin >> x;
      a[i] = x % k;
      if(a[i] % 2 ==0) even_cnt++;
      prod = (prod * a[i]) % k;
    }
    sort(a, a+n);
    int ans;
    if(prod == 0) ans = 0;
    else {
      ans = k - a[n-1];
      if(k == 4) ans = min(ans, 2 - even_cnt);
    }
    cout << ans << "\n";
  }
  return 0;
}
