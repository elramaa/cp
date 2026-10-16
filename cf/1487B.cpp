#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, k; cin >> n >> k;
    k--;
    int f = n / 2;
    int ans = (k + (n % 2) * k / f) % n + 1;
    cout << ans << "\n";
  }
  return 0;
}
