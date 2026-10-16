#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    bool isSorted = true;
    for(int i = 1; i < n; ++i){
      if(a[i] < a[i-1]){
        isSorted = false;
        break;
      }
    }
    if(!isSorted){
      cout << 0 << "\n";
      continue;
    } 
    int min_ = INT32_MAX;
    for(int i = 1; i < n; ++i){
      int diff = a[i] - a[i-1];
      if(diff % 2 == 1) min_ = min(min_, (diff + 1) / 2);
      else min_ = min(min_, diff / 2 + 1);
    }
    cout << min_ << "\n";
  }
  return 0;
}
