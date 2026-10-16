#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
  if(b == 0) return a;
  return gcd(b, a % b);
}

int main(){
  ll p, q, r;
  cin >> p >> q >> r;
  ll s;
  s = p / gcd(p, q) * q;
  s = s / gcd(s, r) * r;
  int n;
  cin >> n;
  while(n--){
    ll t;
    cin >> t;
    if(t % s == 0) cout << "YA";
    else cout << "TIDAK";
    cout << "\n";
  }
  return 0;
}
