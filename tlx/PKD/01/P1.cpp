#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(){
  int n, m, x;
  cin >> n >> m >> x;
  vector<vector<int>> M(n, vector<int>(m));
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> M[i][j];
    }
  }
  while(x--){
    string op; cin >> op;
    if(op == "_"){ // horizontal mirror
      for(int i = 0; i < n / 2; ++i){
        swap(M[i], M[n-i-1]);
      }
    }else if(op == "|"){ // vertical mirror
      for(int i = 0; i < n; ++i){
        for(int j = 0; j < m / 2; ++j){
          swap(M[i][j], M[i][m-j-1]);
        }
      }
    }else if(op == "90"){ // rotate 90 deg
      vector<vi> new_M(m, vi(n));
      for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
          new_M[i][j] = M[n-j-1][i];
        }
      }
      M = new_M;
      swap(n, m);
    }else if(op == "180"){ // rotate 180
      for(int i = 0; i < n / 2; ++i){
        for(int j = 0; j < m; ++j){
          swap(M[i][j], M[n-i-1][m-j-1]);
        }
      }
      if(n % 2 == 1){
        int mid = n/2;
        for(int i = 0; i < m / 2; ++i){
          swap(M[mid][i], M[mid][m-i-1]);
        }
      }
    }else if(op == "270"){ // rotate 270
      vector<vi> new_M(m, vi(n));
      for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
          new_M[i][j] = M[j][m-i-1];
        }
      }
      M = new_M;
      swap(n, m);
    }
  }
  for(auto row: M){
    for(auto col: row){
      cout << col << " ";
    }
    cout << "\n";
  }
  return 0;
}
