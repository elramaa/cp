#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n;
    string s;
    cin >> n >> s;
    if(n > 3) cout << 1 << "\n";
    else {
      string reversed_s = s;
      reverse(reversed_s.begin(), reversed_s.end());
      if(reversed_s == s) cout << 1 << "\n";
      else cout << 2 << "\n";
    }
  }
  return 0;
}
