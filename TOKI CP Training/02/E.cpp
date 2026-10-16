#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll mod = 1e9 + 7;
  ll n, a, b;
  cin >> n >> a >> b;
  vector<vector<ll>> C(n + 1);
  for(ll i = 0; i <= n; ++i){
    C[i].resize(n+1);
    C[i][0] = 1;
  }
  for(ll i = 1; i <= n; ++i){
    for(ll j = 1; j < i; ++j){
      C[i][j] = ((C[i-1][j] % mod) + (C[i-1][j-1] % mod)) % mod;
    }
    C[i][i] = 1;
  }
  ll ans = 0;
  for(int i = a; i <= b; ++i){
    ans += C[n][i] % mod;
  }
  cout << ans % mod;
  return 0;
}
