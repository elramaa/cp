#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    if(a[0] == -1 || a[n-1] == -1) cout << 0 << "\n"; 
    else cout << abs(a[n-1] - a[0]) << "\n";
    for(int i = 0; i < n; ++i){
      if(a[i] == -1){
        if(i == 0 || i == n - 1) cout << max(max(a[i], a[n-1]), 0);
        else cout << 0;
      } else cout << a[i];
      cout << " ";
    }
    cout << "\n";
  }
  return 0;
}
