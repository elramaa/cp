#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> w(k+1), h(k+1);
  for (int i = 1; i <= k; ++i)
    cin >> w[i] >> h[i];
  vector<vi> dp(k + 1, vi(n + 1, 0));
  for (int i = 1; i <= k; ++i) {
    for (int j = 1; j <= n; ++j) {
      dp[i][j] = dp[i - 1][j];
      if (j >= w[i]) {
        dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + h[i]);
      }
    }
  }

  // reconstruct picked rock
  stack<int> picked;
  int j = n;
  for(int i = k; i > 0; --i){
    while (j > 0 && dp[i][j - 1] == dp[i][j]) {
      j--;
    }
    if(dp[i][j] > dp[i-1][j]) {
      picked.push(i);
      j -= w[i];
    }
  }

  while(!picked.empty()){
    cout << picked.top() << "\n";
    picked.pop();
  }
  return 0;
}
