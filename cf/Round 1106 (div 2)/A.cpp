#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, c; cin >> n >> c;
    int a[n], b[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];
    int sol1 = 0; // without sort
    for(int i = 0; i < n; ++i){
      if(a[i] < b[i]){
        sol1 = 1e9;
        break;
      }
      sol1 += a[i] - b[i];
    }
    int sol2 = c;
    sort(a, a+n);
    sort(b, b+n);
    for(int i = 0; i < n; ++i){
      if(a[i] < b[i]){
        sol2 = 1e9;
        break;
      }
      sol2 += a[i] - b[i];
    }
    if(sol1 == 1e9 && sol2 == 1e9){
      cout << -1 << "\n";
    }else{
      cout << min(sol1, sol2) << "\n";
    }
  }
  return 0;
}
