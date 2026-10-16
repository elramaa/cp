#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, m, x, y; cin >> n >> m >> x >> y;
    int h[n], v[m];
    for(int i = 0; i < n; ++i) cin >> h[i];
    for(int i = 0; i < m; ++i) cin >> v[i];
    int ans = 0;
    for(int i = 0; i < n; ++i){
      if(h[i] > y) break; 
      ans++;
    }
    for(int i = 0; i < m; ++i){
      if(v[i] > x) break;
      ans++;
    }
    cout << ans << "\n";
  }
  return 0;
}
