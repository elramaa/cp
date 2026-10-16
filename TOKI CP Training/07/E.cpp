#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for(int i = 0; i < n; ++i){
      for(int j = i; j < n-i; ++j){
        if(s[i] == s[j]) dp[i][j] = 2;
        if(i + 1 < n && j - 1 >= 0){
          dp[i][j] += dp[i+1][j-1];
        }
      }
    }
    cout << dp[n-1][n-1] << "\n";
  }
  return 0;
}
