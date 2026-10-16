#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vb = vector<bool>;
using pi = pair<int, int>;

int main(){
  int n, m; cin >> n >> m;
  vector<string> graph(n);
  for(int i = 0; i < n; ++i) cin >> graph[i];

  // search for connected components
  int connCount = 0;
  vector<vb> visited(n, vb(m, false));
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      if(visited[i][j]) continue;
      stack<pi> st;
      st.push({i, j});
      // connCount++;
      // search for a cycle or a node where it's not pointed by any node
      bool isCycle = false;
      bool startingPointFound = false; 
      // bool firstLoop = true;
      while(!st.empty()){
        pi node = st.top(); st.pop();
        int r = node.first; int c = node.second;
        bool isPointed = false;

        if(r < 0 || c < 0 || r >= n || c >= m) continue;

        if(visited[r][c]){
          if(r == i && c == j){
            isCycle = true;
          } 
          continue;
        }
        visited[r][c] = true;

        if(graph[r][c] == 'R') st.push({ r, c + 1 }); 
        else if(graph[r][c] == 'L') st.push({ r, c - 1 });
        else if(graph[r][c] == 'U') st.push({ r - 1, c });
        else if(graph[r][c] == 'D') st.push({ r + 1, c });

        if(r + 1 < n){
          if(graph[r+1][c] == 'U'){
            isPointed = true;
            st.push({r + 1, c});
          }
        }
        if(c + 1 < m){
          if(graph[r][c+1] == 'L'){
            isPointed = true;
            st.push({r, c+1});
          } 
        }
        if(r > 0){
          if(graph[r - 1][c] == 'D'){
            isPointed = true;
            st.push({r-1, c});
          }
        }
        if(c > 0){
          if(graph[r][c - 1] == 'R'){
            isPointed = true;
            st.push({r, c-1});
          } 
        }

        if(!isPointed){
          startingPointFound = true;
          connCount++;
        }

      }
      
      if(isCycle && !startingPointFound) connCount++;
    }
  }

  cout << connCount;
  return 0;
}
