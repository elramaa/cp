#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll b, c, d;
  cin >> b >> c >> d;
  ll count = 0;
  ll y = c - d;
  if(c == d && b > c){
    count = b - c;
  }else{
    for(ll p = 1; p*p <= y; ++p){
      if(p > b) break;
      if(y % p == 0){
        ll q = y/p;
        if(p == q && c % p == d) count++;
        else {
          if(c % p == d) count++;
          if(c % q == d) count++;
        }
      }
    }
  }
  cout << count;
  return 0;
}
