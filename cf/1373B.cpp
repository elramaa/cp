#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    string s; cin >> s;
    int n = s.size();
    int one = 0, zero = 0;
    for(auto x: s){
      if(x == '0') zero++;
      else if(x == '1') one++;
    }
    int p = min(one, zero);
    if(p % 2 == 1) cout << "DA\n";
    else cout << "NET\n";
  }
  return 0;
}
