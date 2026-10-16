#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(){
  int grid[3][3];
  for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 3; ++j){
      cin >> grid[i][j];
    }
  }
  vector<vi> cnt(3, vi(3, 0));
  for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 3; ++j){
      cnt[i][j] += grid[i][j];
      if(i > 0) cnt[i-1][j] += grid[i][j]; 
      if(i < 2) cnt[i+1][j] += grid[i][j]; 
      if(j > 0) cnt[i][j-1] += grid[i][j]; 
      if(j < 2) cnt[i][j+1] += grid[i][j]; 
    }
  }
  for(auto row: cnt){
    for(auto col: row){
      if(col % 2 == 0) cout << '1';
      else cout << '0';
    }
    cout << "\n";
  }
  return 0;
}
