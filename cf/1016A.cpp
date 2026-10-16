#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  int spaces = m;
  for(int i = 0; i < n; ++i){
    int x; cin >> x;
    int t = 0;
    if(i > 0){
      if(x >= spaces){
        x -= spaces;
        t = 1 + x / m;
        spaces = m - (x % m);
      } else spaces -= x;
    }else{
      t = x / m;
      spaces = m - (x % m);
    }
    cout << t << " ";
  }
  return 0;
}
