#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n, k; cin >> n >> k;
  ll y = 1;
  while(y * (y + 3) < (n + k) * 2){
    y++;
  }
  ll x = n - y;
  cout << x;
  return 0;
}
