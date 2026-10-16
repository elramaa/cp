#include <bits/stdc++.h>
using namespace std;
int mod = 676767677;

vector<vector<int>> memo(2e5+1, vector<int>(2e5+1, -1));

int dp(int x, int y){
  if(memo[x][y] != -1) return memo[x][y];
  if(x == 0 && y == 0) return 1;
  memo[x][y] = dp();
  return memo[x][y];
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int x, y; cin >> x >> y;
    cout << dp(x, y) << "\n";
  }
  return 0;
}
