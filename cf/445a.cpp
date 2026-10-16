#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  char A[n][m];
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> A[i][j];
    }
  }
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      if(A[i][j] == '-'){
        cout << '-';
        continue;
      };
      if(i % 2 == 0) cout << ((j % 2 == 0) ? 'B' : 'W');
      else if(i % 2 == 1) cout << ((j % 2 == 1) ? 'B' : 'W');
    }
    cout << "\n";
  }
  return 0;
}
