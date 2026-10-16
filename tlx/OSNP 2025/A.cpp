#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.size();
  map<char, int> count;
  vector<int> dp(n+1, 0);
  for(int i = 1; i <= n; ++i){
    char c = s[i-1];
    count[c]++;
    dp[i] = dp[i-1]; 
    if(c == 'P'){
      // Continue from previous P
      if(dp[i] != 0) dp[i]++;
      // Not continuing from the previous P
      if(count['O'] > 0 && count['S'] > 0 && count['N'] > 0){
        dp[i] = max(dp[i], count['O']+count['S']+count['N']+1);
      }
    }
  }
  if(dp[n] == 0) cout << -1;
  else cout << dp[n];
  return 0;
}
