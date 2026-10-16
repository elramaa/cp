#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int n, m, k; 
vector<vector<vi>> memo(101, vector<vi>(101, vi(101, -1)));

int dp(int m, int k, int i, int P[]){
  if(i == n) return 0;
  if(memo[m][k][i] != -1) return memo[m][k][i];
  int sol1 = 0, sol2 = 0;
  if(m >= P[i]) sol1 = dp(m - P[i], k, i + 1, P) + 1;
  if(k > 0) sol2 = dp(m, k - 1, i + 1, P) + 1;
  memo[m][k][i] = max(sol1, sol2);
  return memo[m][k][i];
}

int main(){
  cin >> n >> m >> k;
  int P[n];
  for(int i = 0; i < n; ++i) cin >> P[i];
  cout << dp(m, k, 0, P);
  return 0;
}
