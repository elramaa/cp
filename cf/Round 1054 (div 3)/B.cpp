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
    sort(a, a+n);
    int max_diff = 0;
    for(int i = 0; i < n-1; i += 2){
      max_diff = max(abs(a[i] - a[i+1]), max_diff);
    }
    cout << max_diff << "\n";
  }
  return 0;
}
