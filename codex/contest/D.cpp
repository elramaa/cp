#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n;
    char c;
    string s;
    cin >> n >> c >> s;
    int ans = 0;
    for(int i = 0, j = n - 1; i < j; ++i, --j){
      if(s[i] != s[j]){
        if(s[i] != c) ans++;
        if(s[j] != c) ans++;
      } 
    }
    cout << ans << "\n";
  }
  return 0;
}
