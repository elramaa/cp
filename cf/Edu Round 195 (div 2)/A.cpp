#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int a, b; cin >> a >> b;
    if(b >= a){
      cout << -1 << "\n";
      continue;
    }
    int ans = 0;
    while(a >= 2 && b >= 1 && a > b){
      ans++; a -= 2; b--;
    }
    cout << ans << "\n";
  }
  return 0;
}
