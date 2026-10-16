#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int ans;
    cin >> ans;
    n--;
    while(n--){
      int x; cin >> x;
      ans &= x;
    }
    cout << ans << "\n";
  }
  return 0;
}
