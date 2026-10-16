#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n, m;
  cin >> n >> m;
  vector<ll> a(n+1, 0), b(m);
  for(int i = 1; i < n; ++i){
    ll x;
    cin >> x;
    a[i] = a[i-1] + x;
  }
  for(int i = 0; i < m; ++i){
    cin >> b[i];
  }
  for(auto x: b){
    cout << x << " ";
    // ll dorm = upper_bound(a.begin(), a.end(), x) - a.begin();
    // cout << dorm << "\n";
    // ll room = x - a[dorm-1];
    // cout << dorm << " " << room << "\n";
  }
  return 0;
}
