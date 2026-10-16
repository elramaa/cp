#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int s[3];
    cin >> s[0] >> s[1] >> s[2];
    sort(s, s+3);
    // int a, b, c; cin >> a >> b >> c;
    int ans = 0;
    if(s[0] > 0) ++ans, --s[0];
    if(s[1] > 0) ++ans, --s[1];
    if(s[2] > 0) ++ans, --s[2];
    if(s[1] > 0 && s[2] > 0) ++ans, --s[1], --s[2];
    if(s[0] > 0 && s[2] > 0) ++ans, --s[0], --s[2];
    if(s[0] > 0 && s[1] > 0) ++ans, --s[0], --s[1];
    if(s[0] > 0 && s[1] > 0 && s[1] > 0) ++ans, --s[0], --s[1], --s[2];
    cout << ans << "\n";
  }
  return 0;
}
