#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i){
    int x, y;
    cin >> x >> y;
  }
  vector<vector<ll>> C(n + 1);
  for(ll i = 0; i <= n; ++i){
    C[i].resize(n+1);
    C[i][0] = 1;
  }
  for(ll i = 1; i <= n; ++i){
    for(ll j = 1; j < i; ++j){
      C[i][j] = C[i-1][j] + C[i-1][j-1];
    }
    C[i][i] = 1;
  }
  if(n < 3) cout << 0;
  else cout << C[n][3];
  return 0;
}
