#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int max_ = 0;
  while(n--){
    int x; cin >> x;
    max_ = max(max_, x);
  }
  cout << max_;
  return 0;
}
