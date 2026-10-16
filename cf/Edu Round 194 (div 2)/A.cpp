#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int a[n];
    int easy = 0;
    for(int i = 0; i < n; ++i){
      cin >> a[i];
      if(a[i] == 0) easy++;
    } 

    if(easy < 2){
      cout << -1 << "\n";
      continue;
    }

    int ans = 0;
    if(a[0] != 0) ans++;
    if(a[n-1] != 0) ans++;

    cout << ans << "\n";
  }
  return 0;
}
