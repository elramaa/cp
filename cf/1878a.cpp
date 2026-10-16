#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    bool found = false;
    while(n--){
      int x;
      cin >> x;
      if(x == k) found = true;
    }
    if(found) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
