#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a[n];
    int ctr[101] = {0};
    bool twice = false;
    for(int i = 0; i < n; ++i){
      cin >> a[i];
      ctr[a[i]]++;
      if(ctr[a[i]] > 1) twice = true;
    }
    if(twice){
      cout << -1 << "\n";
      continue;
    }
    // Sort decreasing using bubble sort
    for(int i = 0; i < n - 1; ++i){
      for(int j = 0; j < n - i - 1; ++j){
        if(a[j] < a[j+1]) swap(a[j], a[j+1]);
      }
    }
    for(int x: a) cout << x << " ";
    cout << "\n";
  }
  return 0;
}
