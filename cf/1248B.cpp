#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n; cin >> n;
  ll a[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  sort(a, a+n);
  ll x = 0, y = 0;
  for(int i = 0; i < n / 2; ++i){
    x += a[i];
    y += a[n-1-i];
  }
  if(n % 2 == 1) y += a[n / 2];
  cout << x * x + y * y;
  return 0;
}
