#include <bits/stdc++.h>
#include <cstdint>
using namespace std;

vector<int> memo(4001, INT32_MIN);

int solve(int n, vector<int> lengths){
  if(memo[n] != INT32_MIN) return memo[n];
  if(n == 0) return 0;
  if(n < 0) return INT32_MIN;
  int best = -1;
  for(int len: lengths){
    if(n - len < 0) continue;
    if(solve(n - len, lengths) == -1) continue;
    best = max(best, solve(n-len, lengths) + 1);
  }
  memo[n] = best;
  return memo[n];
}

int main() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  cout << solve(n, {a, b, c});
  return 0;
}
