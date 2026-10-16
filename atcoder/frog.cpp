#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int h[n];
  for(int i = 0; i < n; ++i) cin >> h[i];
  int cost[n] = {0};
  cost[1] = abs(h[1] - h[0]);
  for(int i = 2; i < n; ++i){
    cost[i] = min(cost[i-1] + abs(h[i] - h[i-1]), cost[i-2] + abs(h[i] - h[i-2]));
  }
  cout << cost[n-1];
  return 0;
}
