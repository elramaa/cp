#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    bool yes = true;
    int prevP = 0, prevC = 0;
    while(n--){
      int p, c; cin >> p >> c;
      int incrP = p - prevP, incrC = c - prevC;
      if(incrP < 0 || incrC < 0 || incrC > incrP) yes = false;
      // if(c > p || c < prevC || p < prevP || (c > prevC && prevP == p)) yes = false;
      prevP = p; prevC = c;
    }
    if(yes) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
