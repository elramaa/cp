#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;
    int max_ = 0;
    for(int i = 0; i < n; ++i){
      int a; cin >> a;
      max_ = max(max_, a);
    }
    for(int i = 0; i < m; ++i){
      char c;
      int l, r;
      cin >> c >> l >> r;
      if(max_ <= r && max_ >= l){
        if(c == '+') max_++;
        else if(c == '-') max_--;
      }
      cout << max_ << " ";
    }
    cout << "\n";
  }
  return 0;
}
