#include <bits/stdc++.h>
using namespace std;
using vb = vector<bool>;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    string grid[n];
    for(int i = 0; i < n; ++i) cin >> grid[i];
    
    int cnt = 0;
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < n; ++j){
        // check 90
        if(grid[i][j] != grid[n-j-1][i]){
          cnt++;
          continue;
        } 
        // check 180
        if(grid[i][j] != grid[n-i-1][n-j-1]){
          cnt++;
          continue;
        }
        // check 270
        if(grid[i][j] != grid[j][n-i-1]){
          cnt++;
          continue;
        }
      }
    }

    cout << cnt << "\n";
  }
  return 0;
}
