#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t; cin >> t;
  while(t--){
    ll n, k; cin >> n >> k;
    if(n % 2 == 1){
      bool isPrime = true;
      for(int p = 2; p * p <= n; ++p){
        if(n % p == 0){
          isPrime = false;
          n += p;
          k--;
          break;
        }
      }
      if(isPrime){
        n += n;
        k--;
      }
    }
    n += 2 * k;
    cout << n << "\n";
  }
  return 0;
}
