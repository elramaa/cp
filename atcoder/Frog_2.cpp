#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k; cin >> n >> k;
  int h[n+1];
  for(int i = 1; i <= n; ++i) cin >> h[i];
  vector<int> cost(n+1, INT32_MAX);
  cost[1] = 0;
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= k; ++j){
      if(i+j <= n){
        cost[i+j] = min(cost[i+j], cost[i] + abs(h[i] - h[i+j]));
      }
    }
  }
  cout << cost[n];
  return 0;
}
