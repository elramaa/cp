#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int l, r, a; cin >> l >> r >> a;
    int ans = r / a + r % a;
    int min_ = (r / a) * a - 1;
    if(min_ >= l) ans = max(ans, min_ / a + min_ % a);
    cout << ans << "\n";
  }
  return 0;
}
