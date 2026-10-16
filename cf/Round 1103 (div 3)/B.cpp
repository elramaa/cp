#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    for(int i = 0; i < n - k; ++i){
      if(s[i] == '1'){
        s[i] = '0';
        if(s[i+k] == '1') s[i+k] = '0';
        else s[i+k] = '1';
      }
    }
    bool yes = true;
    for(int i = n - k; i < n; ++i){
      if(s[i] == '1'){
        yes = false;
        break;
      }
    }
    if(yes) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
