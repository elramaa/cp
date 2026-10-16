#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n - 1; ++i){
      int min_ = i;
      for(int j = i+1; j < n; ++j){
        if(a[j] < a[min_] && a[j] % 2 != a[min_] % 2) min_ = j;
      }
      swap(a[i], a[min_]);
    }
    for(int x: a) cout << x << " ";
    cout << "\n";
  }
  return 0;
}
