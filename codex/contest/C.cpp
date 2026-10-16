#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;
    int grid[n][m];
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < m; ++j) cin >> grid[i][j];
    }
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < m; ++j){
        int left, right, top, bottom;
        left = right = top = bottom = 0;
        if(i > 0) top = grid[i-1][j];
        if(j > 0) left = grid[i][j-1];
        if(i < n - 1) bottom = grid[i+1][j];
        if(j < m - 1) right = grid[i][j+1];
        grid[i][j] = min(max({left, right, top, bottom}), grid[i][j]);
      }
    }
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < m; ++j) cout << grid[i][j] << " ";
      cout << "\n";
    }
  }
  return 0;
}
