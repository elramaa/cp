#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  if(m < 2){
    cout << 1;
    return 0;
  }
  n -= 2; m -= 2;
  int left = n / 2;
  int right = n - left;
  int r = min(m+1, (right + 1) / 2);
  m = min(0, m - (right - r));
  int l = min(m+1, (left + 1) / 2);
  m = min(0, m - (left - l));
  int ans = l + r - m;
  cout << ans;
  return 0;
}
