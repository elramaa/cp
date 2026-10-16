#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> dp(1e5 + 1, vector<int>(3, -1));
vector<vector<int>> item(1e5 + 1, vector<int>(3, -1));

int ans(int i, int j){
  if(i >= n) return 0;
  if(dp[i][j] != -1) return dp[i][j];
  dp[i][j] = max(item[i][j] + ans(i+1, (j+1) % 3), item[i][j] + ans(i+1, (j+2) % 3));
  return dp[i][j];
}

int main(){
  cin >> n;
  for(int i = 0; i < n; ++i) cin >> item[i][0] >> item[i][1] >> item[i][2];
  int possible_ans[] = {ans(0, 0), ans(0, 1), ans(0, 2)};
  int max_ = *max_element(possible_ans, possible_ans+3);
  cout << max_;
  return 0;
}
