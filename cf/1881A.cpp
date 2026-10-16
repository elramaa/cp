#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;
    string x, s; cin >> x >> s;
    int tr = 0;
    while(tr <= 5){
      if(x.find(s) != string::npos){
        break;
      }
      x += x;
      tr++;
    }
    cout << (tr > 5 ? -1 : tr) << "\n";
  }
  return 0;
}
