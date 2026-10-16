#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    int max_ = 0;
    int ans = -1;
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      max_ = max(max_, a[i]);
    }
    for (int i = 0; i < n; ++i) {
      if (a[i] == max_) {
        if(i > 0){
          if(a[i] != a[i-1]){
            ans = i + 1;
            break;
          }
        }
        if(i < n - 1){
          if(a[i] != a[i+1]){
            ans = i + 1;
            break;
          }
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
