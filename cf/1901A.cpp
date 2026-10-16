#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    int vol = a[0];
    for(int i = 1; i < n; ++i) vol = max(vol, a[i] - a[i-1]);
    vol = max(vol, 2 * (x - a[n-1]));
    cout << vol << "\n";
  }
  return 0;
}
