#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    vector<bool> vdone(n, false);
    for(int i = 0; i < n-1; ){
      if(s[i] == 'A' && s[i+1] == 'B' && !vdone[i]){
        ans++;
        swap(s[i], s[i+1]);
        vdone[i] = true;
        if(i > 0){
          if(s[i-1] == 'A'){
            i = i-1;
            continue;
          };
        }
      } 
      ++i;
    }
    cout << ans << "\n";
  }
  return 0;
}
