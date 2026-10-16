#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int ans = 0;
    bool hasFreeLand = false;
    for(int i = 0; i < n; ++i){
      if(s[i] == '0'){
        hasFreeLand = true;
      }
      if((i + 1) % k == 0){
        if(hasFreeLand){
          hasFreeLand = false;
        }else{
          ans++;
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
