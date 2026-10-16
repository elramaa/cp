#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  vector<bool> primes(pow(10, 6) + 1, true);
  primes[0] = primes[1] = false;
  // First, let's mark all possible prime numbers using Sieve of Erastothenes method
  for(int i = 2; i <= pow(10, 6); ++i){
    if(!primes[i]) continue;
    for(int j = 2*i; j <= pow(10, 6); j += i){
      primes[j] = false;
    }
  }
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i){
    ll x;
    cin >> x;
    ll base = sqrt(x);
    if(base * base != x || !primes[base]){
      cout << "NO";
    }else{
      cout << "YES";
    }
    cout << "\n";
  }
  return 0;
}
