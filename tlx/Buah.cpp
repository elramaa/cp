#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
  if(b == 0) return a;
  return gcd(b, a % b);
}

int main(){
  ll n, a, b; cin >> n >> a >> b;
  ll gcd_ab = gcd(a, b);
  ll lcm = a * b / gcd_ab;
  ll ans = (lcm / a) + (lcm / b);
  cout << ans;
  return 0;
}
