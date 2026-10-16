#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    int l = 0, r = n-1;
    while(l < n && abs(a[l]) != 1){
      l++;
    }
    while(r >= 0 && abs(a[r]) != 1){
      r--;
    }
    if(a[l] == -1) a[l] = 1;
    if(a[r] == -1) a[r] = 1;
    for(int i = 0; i < n; ++i){
      if(a[i] == -1){
        a[i] = 0;
      }
    }
    for(auto x: a) cout << x << " ";
    cout << "\n";
  }
  return 0;
}
