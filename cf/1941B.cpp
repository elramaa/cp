#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    bool yes = true;
    for(int i = 0; i < n - 2; ++i){
      if(a[i] < 0){
        yes = false;
        break;
      }
      a[i+1] -= a[i] * 2;
      a[i+2] -= a[i];
      a[i] = 0;
    }
    if(a[n-1] != 0 || a[n-2] != 0) yes = false;
    cout << (yes ? "YES" : "NO") << "\n";
  }
  return 0;
}
