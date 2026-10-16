#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, a, b; cin >> n >> a >> b;
    vector<string> photo(n);
    for(int i = 0; i < n; ++i) cin >> photo[i];
    int star = 0;
    bool impossible = false;
    for(int i = n-1; i >= 0; --i){
      if(impossible) break;
      for(int j = n-1; j >= 0; --j){
        if(photo[i][j] == 'B'){
          if(j - a >= 0 && i - b >= 0){
            if(photo[i - b][j - a] == 'W'){
              impossible = true;
              break;
            }
          }
        }
      }
    }
    if(impossible) cout << -1 << "\n";
    else cout << star << "\n";
  }
  return 0;
}
