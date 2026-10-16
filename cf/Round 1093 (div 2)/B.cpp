#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;
    // int a[n];
    bool no = false;
    int x = -1;
    int length = 0;
    for(int i = 0; i < n; ++i){
      int a; cin >> a;
      if(x != a){
        x = a;
        length = 1;
      }else{
        length++;
        if(length >= m) no = true;
      }
    }
    if(no) cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}
