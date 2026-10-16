#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, p;
  cin >> n >> m >> p;
  vector<vector<int>> A(n);
  vector<vector<int>> B(m);
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      int x;
      cin >> x;
      A[i].push_back(x);
    }
  }
  for(int i = 0; i < m; ++i){
    for(int j = 0; j < p; ++j){
      int x;
      cin >> x;
      B[i].push_back(x);
    }
  }
  vector<vector<int>> C(n);
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < p; ++j){
      C[i].push_back(0);
      for(int k = 0; k < m; ++k){
        C[i][j] += A[i][k] * B[k][j];
      }
      cout << C[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}
