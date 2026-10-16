#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(){
  int n, m, k; cin >> n >> m >> k;
  vector<int> rows(n+1, 0);
  vector<int> cols(m+1, 0);
  vector<int> rowsOpOrder(n+1, -1); 
  vector<int> colsOpOrder(m+1, -1); 
  for(int i = 1; i <= k; ++i){
    int op, rc, a; cin >> op >> rc >> a;
    if(op == 1){
      rows[rc] = a;
      rowsOpOrder[rc] = i;
    }else if(op == 2){
      cols[rc] = a;
      colsOpOrder[rc] = i;
    }
  }
  for(int r = 1; r <= n; ++r){
    for(int c = 1; c <= m; ++c){
      if(rowsOpOrder[r] > colsOpOrder[c]) cout << rows[r];
      else cout << cols[c];
      cout << " ";
    }
    cout << "\n";
  }
  return 0;
}
