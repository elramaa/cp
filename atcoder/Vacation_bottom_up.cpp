#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<vector<int>> item(n, vector<int>(3, -1));
  vector<vector<int>> dp(n, vector<int>(3, -1));
  for(int i = 0; i < n; ++i) cin >> item[i][0] >> item[i][1] >> item[i][2];
  dp[0] = item[0];
  for(int i = 1; i < n; ++i){
    for(int j = 0; j < 3; ++j){
      dp[i][j] = max(item[i][j] + dp[i-1][(j+1) % 3], item[i][j] + dp[i-1][(j+2) % 3]);
    }
  }
  int possible_ans[] = {dp[n-1][0], dp[n-1][1], dp[n-1][2]};
  int max_ = *max_element(possible_ans, possible_ans+3);
  cout << max_;
  return 0;
}
