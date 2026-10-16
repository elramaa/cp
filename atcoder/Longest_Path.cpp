#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
vi dp(1e5 + 1, -1);

int longest_path(int node, vector<vi> &graph){
  if(dp[node] != -1) return dp[node];
  int max_ = 0;
  for(int x: graph[node]){
    max_ = max(max_, longest_path(x, graph)+1);
  }
  dp[node] = max_;
  return dp[node];
}

int main(){
  int n, m; cin >> n >> m;
  vector graph(n+1, vi());
  for(int i = 0; i < m; ++i){
    int x, y; cin >> x >> y;
    graph[x].push_back(y);
  }
  int max_ = 0;
  for(int i = 1; i <= n; ++i) max_ = max(max_, longest_path(i, graph));
  cout << max_;
  return 0;
}
