#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s, t;
  cin >> n >> s >> t;
  if(s == t){
    cout << "YA";
    return 0;
  }
  vector<int> vs(n);
  vector<int> vt(n);
  for(int i = 0; i < n; ++i){
    vs[i] = s[i] - '0';
    vt[i] = t[i] - '0';
  }
  int match_cnt = 0;
  for(int i = 1; i <= 9; ++i){
    match_cnt = 0;
    for(int j = 0; j < n; ++j){
      vs[j] = (vs[j] + 1) % 10;
      if(vs[j] == vt[j]) match_cnt++;
    }
    if(match_cnt == n) break;
  }
  if(match_cnt == n) cout << "YA";
  else cout << "TIDAK";
  return 0;
}
