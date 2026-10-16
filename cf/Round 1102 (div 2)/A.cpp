#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int b[n];
    for(int i = 0; i < n; ++i) cin >> b[i];
    sort(b, b+n);
    reverse(b, b+n);
    bool valid = true;
    for(int i = 2; i < n; ++i){
      if(b[i] != b[i-2] % b[i-1]){
        valid = false;
        break;
      }
    }
    if(valid) cout << b[0] << " " << b[1] << "\n";
    else cout << -1 << "\n";
  }
  return 0;
}
