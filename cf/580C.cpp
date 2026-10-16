#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  int a[n+1];
  for(int i = 1; i <= n; ++i){
    cin >> a[i];
  }
  vector<vector<int>> graph(n+1, vector<int>{});
  for(int i = 0; i < n - 1; ++i){
    int x, y; cin >> x >> y;
    graph[x].push_back(y);
  }
  int cnt = 0;
  vector<bool> visited(n+1, false);
  vector<int> w(n+1, 0);
  w[1] = a[1];
  queue<int> next_visit;
  next_visit.push(1);
  while(!next_visit.empty()){
    int node = next_visit.front();
    next_visit.pop();
    visited[node] = true;
    if(w[node] > r)
    for(auto x: graph[node]){
      if(!visited[x]){
        next_visit.push(x);
        w[x] = w[node];
        if(a[x]) w[x]++;
      }
    }
  }
  cout << cnt;
  return 0;
}
