#include <bits/stdc++.h>
using namespace std;

int main(){
  string s, t; cin >> s >> t;
  vector dp(s.size()+1, vector<int>(t.size()+1, 0));
  vector prev(s.size()+1, vector<pair<int, int>>(t.size()+1, {0, 0}));
  for(int i = 1; i <= s.size(); ++i){
    for(int j = 1; j <= t.size(); ++j){
      dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      if(dp[i-1][j] > dp[i][j-1]) prev[i][j] = {i-1, j};
      else prev[i][j] = {i, j-1};
      if(s[i-1] == t[j-1]){
        dp[i][j] = dp[i-1][j-1] + 1;
        prev[i][j] = {i-1, j-1};
      }
    }
  }
  // backtrack
  string subs = "";
  for(pair<int, int> p{s.size(), t.size()}; p.first != 0 && p.second != 0; p = prev[p.first][p.second]){
    char sx = s[p.first-1];
    char tx = t[p.second-1];
    if(sx == tx) subs += sx;
  }
  reverse(subs.begin(), subs.end());
  cout << subs;
  return 0;
}
