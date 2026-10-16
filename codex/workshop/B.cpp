#include <bits/stdc++.h>
using namespace std;

int main(){
  int k; cin >> k;
  bool isPrime = true;
  for(int p = 2; p * p <= k; ++p){
    if(k % p == 0){
      isPrime = false;
      break;
    }
  }
  if(k == 1) isPrime = false;
  cout << (isPrime ? "YES" : "NO");
  return 0;
}
