#include <bits/stdc++.h>
#include <cstdint>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int best = INT32_MAX;
    map<char, int> check;
    check['1'] = check['2'] = check['3'] = -1;
    for(int i = 0; i < s.size(); ++i){
      check[s[i]] = i;
      if(check['1'] != -1 && check['2'] != -1 && check['3'] != -1){
        best = min(best, max({check['1'], check['2'], check['3']})-min({check['1'], check['2'], check['3']})+1);
      }
    }
    if(best == INT32_MAX) cout << 0 << "\n";
    else cout << best << "\n";
  }
  return 0;
}
