#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int p[n];
    for(int i = 0; i < n; ++i) cin >> p[i];
    bool found = false;
    for(int i = 1; i < n-1; ++i){
      if(p[i] > p[i-1] && p[i] > p[i+1]){
        cout << "YES\n";
        cout << i << " " << i + 1 << " " << i + 2 << "\n";
        found = true;
        break;
      } 
    }
    if(!found) cout << "NO\n";
  }
  return 0;
}
