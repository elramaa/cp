#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    int orB = 0;
    for(int i = 0; i < n; ++i) cin >> a[i]; 
    for(int i = 0; i < m; ++i) cin >> b[i];
    int xMin = 0;
    int xMax = 0; 
    for(auto x: b){
      orB = orB | x;
    }
    for(auto x: a){
      xMax = xMax | x;
      xMin = xMin | orB;
    }
    cout << xMin << " " << xMax << "\n";
  }
  return 0;
}
