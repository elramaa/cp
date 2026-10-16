#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    string s;
    cin >> n >> k >> s;
    int ans = 0;
    for(int i = 0, x = 0; i < n; ++i){
      char c = s[i];
      if(c == 'B' && i >= x){
        x = i+k;
        ans++;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
