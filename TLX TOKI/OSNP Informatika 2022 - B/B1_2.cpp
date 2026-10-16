#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll p, q, r;
  cin >> p >> q >> r;
  int n;
  cin >> n;
  while(n--){
    ll t;
    cin >> t;
    if(t % p == 0 && t % q == 0 && t % r == 0) cout << "YA";
    else cout << "TIDAK";
    cout << "\n";
  }
  return 0;
}
