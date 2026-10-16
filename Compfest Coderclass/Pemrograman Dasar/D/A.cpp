#include <bits/stdc++.h>
using namespace std;

int g(int n){
  // menghitung banyak faktor dari n
  int cnt = 0;
  for(int p = 1; p * p <= n; ++p){
    if(n % p == 0){
      cnt++;
      int q = n / p;
      if(q != p) cnt++;
    }
  }
  return cnt;
}

int h(int n){
  // menghitung g(1) + g(2) + ... + g(n)
  if(n == 0) return 0;
  return g(n) + h(n-1);
}

int main(){
  int x; cin >> x;
  cout << h(x);
  return 0;
}
