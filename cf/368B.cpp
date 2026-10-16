#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  int a[n];
  set<int> trackNums;
  int uniqueSuffixes[n];
  for(int i = 0; i < n; ++i) cin >> a[i];  
  for(int i = n - 1; i >= 0; --i){
    trackNums.insert(a[i]);
    uniqueSuffixes[i] = trackNums.size();
  }
  while(m--){
    int l; cin >> l; --l;
    cout << uniqueSuffixes[l] << "\n";
  }
  return 0;
}
