#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int a, b, x;
    cin >> a >> b >> x;
    if(a == b){
      cout << 0 << "\n";
      continue;
    }
    int ans = INT32_MAX;
    int div_cnt = 0;
    while(a != b){
      ans = min(ans, abs(a-b) + div_cnt);
      if(a > b){
        a /= x;
      }else{
        b /= x;
      }
      div_cnt++;
    }
    ans = min(ans, div_cnt);
    cout << ans << "\n";
  }
  return 0;
}
