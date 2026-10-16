#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t; cin >> t;
  while(t--){
    ll n; cin >> n;
    ll a = n % 12;
    ll b = n - a;
    if(a == 10){
      a += 12;
      b -= 12;
    }
    if(a < 0 || b < 0) cout << -1 << "\n";
    else cout << a << " " << b << "\n";
  }
  return 0;
}
