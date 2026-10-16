#include <bits/stdc++.h>
using namespace std;
using pi = pair<int, int>;

int main(){
  int n, k; cin >> n >> k;
  pi A[n];
  double ans = 0;
  for(int i = 0; i < n; ++i) cin >> A[i].first >> A[i].second;
  for(int i = 1; i < n; ++i){
    int x = A[i].first - A[i-1].first;
    int y = A[i].second - A[i-1].second;
    ans += sqrt(x*x + y*y) / 50;
  }
  ans *= k;
  cout << fixed << setprecision(6) << ans;
  return 0;
}
