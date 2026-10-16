#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(){
  int m, n; cin >> m >> n;
  vector<vi> M(m, vi(n));
  for(int i = 0; i < m; ++i){
    for(int j = 0; j < n; ++j) cin >> M[i][j];
  }
  int best;
  cout << best;
  return 0;
}
