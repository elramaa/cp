#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; cin >> n;
  ll smallest_odd = INT32_MAX;
  ll sum = 0;
  while(n--){
    ll x; cin >> x;
    sum += x;
    if(x % 2 == 1){
      smallest_odd = min(smallest_odd, x);
    }
  }
  if(sum % 2 == 1) sum -= smallest_odd;
  cout << sum;
  return 0;
}
