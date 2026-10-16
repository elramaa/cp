#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e6;

ll exp(ll a, ll b) {
  if(b == 0) return 1;
  if (b == 1) {
    return a % mod;
  }
  if(b % 2 == 0){
    ll x = exp(a % mod, b/2) % mod;
    return (x * x) % mod;
  }else{
    return ((exp(a % mod, b-1) % mod) * (a % mod)) % mod;
  }
}

int main() {
  ll a, b;
  cin >> a >> b;
  ll res = exp(a, b);
  ll pow_ = pow(a, b);
  if(res < mod && (pow_ < 0 || pow_ >= 1e6)){
    for(int x = to_string(res).size(); x < 6; x++) cout << 0;
  }
  cout << res;
  return 0;
}
