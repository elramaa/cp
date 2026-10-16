#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q; cin >> n >> q;
  int h[n];
  for(int i = 0; i < n; ++i) cin >> h[i];
  sort(h, h+n);
  while(q--){
    int a, b; cin >> a >> b;
    int len_b = upper_bound(h, h+n, b) - h;
    int len_a = lower_bound(h, h+n, a) - h;
    int cnt = len_b - len_a;
    cout << cnt << "\n";
  }
  return 0;
}
