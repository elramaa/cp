#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k; cin >> n >> k;
  vector<int> primes;
  vector<bool> isPrime(1e6 + 1, true);
  isPrime[1] = false;
  for(int i = 2; i <= 1e6; ++i){
    if(!isPrime[i]) continue;
    primes.push_back(i);
    for(int j = 2 * i; j <= 1e6; j += i){
      isPrime[j] = false;
    }
  }

  for(int i = 0; i < n; ++i){
    cout << primes[i * k] << "\n";
  }
  return 0;
}
