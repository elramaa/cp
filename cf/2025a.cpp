#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin >> q;
  while(q--){
    string s, t;
    cin >> s >> t;
    int x = 0;
    int i = 0;
    while(s[i] == t[i] && i < s.size() && i < t.size()){
      x++;
      i++;
    }
    int ans = x + s.size() - x + t.size() - x;
    if(x != 0) ans += 1;
    cout << ans << "\n";
  }
  return 0;
}
