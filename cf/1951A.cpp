#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    string s; cin >> s;
    if(n < 2 && s[0] != '0'){
      cout << "NO\n";
      continue;
    }
    int zero = 0;
    for(auto x: s){
      if(x == '0') zero++;
    }
    if(zero % 2 == 0) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
