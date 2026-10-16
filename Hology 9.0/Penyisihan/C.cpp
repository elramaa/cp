#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;
    char firstB = b[0];
    bool foundFirstB = false;
    bool yes = true;
    for(int i = 0; i <= n - m; ++i){
      if(a[i] == firstB){
        foundFirstB = true;
        break;
      }
    }
    if(foundFirstB){
      for(int i = n - m + 1, j = 1; i < n && j < m; ++i, ++j){
        if(a[i] != b[j]){
          yes = false;
          break;
        }
      }
    }else{
      yes = false;
    }
    if(yes) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
