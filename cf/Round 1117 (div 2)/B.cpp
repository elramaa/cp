#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < m; ++i) cin >> b[i];

    int cntA = a[n-1], cntB = b[m-1];
    for(int i = 0; i < n - 1; ++i){
      cntA += a[i] - a[i+1] + 1;
    }
    for(int i = 0; i < m - 1; ++i){
      cntB += b[i] - b[i+1] + 1;
    }

    int winner;
    if(cntB <= cntA) winner = 1;
    else winner = 2;

    cout << winner << "\n";
  }
  return 0;
}
