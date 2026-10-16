#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<int>> G(n+1, vector<int>{});
  while(m--){
    int u, v;
    cin >> u >> v;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  vector<int> visited(n+1, false);
  
  int cnt = 0;
  stack<int> st;
  for(int i = 1; i <= n; ++i){
    if(visited[i]) continue;
    st.push(i);
    visited[i] = true;
    cnt++;
    while(!st.empty()){
      int node = st.top();
      st.pop();
      for(auto adj: G[node]){
        if(visited[adj]) continue;
        st.push(adj);
        visited[adj] = true;
      }
    }
  }

  cout << cnt;
  return 0;
}
