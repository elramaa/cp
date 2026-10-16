#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  ll X[n], Y[n];
  for(int i = 0; i < n; ++i) cin >> X[i];
  for(int i = 0; i < n; ++i) cin >> Y[i];
  sort(X, X+n);
  sort(Y, Y+n);
  ll ans = 0;
  for(int i = 0, j = n - 1; i < n && j >= 0; ++i, --j){
    ans += X[i] * Y[j];
  }
  cout << ans;
  return 0;
}
