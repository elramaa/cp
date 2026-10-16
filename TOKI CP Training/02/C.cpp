#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  int lim = 1e6;
  vector<bool> sieve(lim, true);
  vector<int> prime(lim);
  int cprime = 1;
  sieve[0] = sieve[1] = false;
  for(int i = 2; i < lim; ++i){
    if(!sieve[i]) continue;
    prime[cprime++] = i;
    for(int x = 2*i; x < lim; x += i){
      sieve[x] = false;
    }
  }
  while(t--){
    int k;
    cin >> k;
    cout << prime[k] << "\n";
  }
  return 0;
}
