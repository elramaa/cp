#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int right, left;
    int x;
    cin >> x;
    right = left = x;
    bool invalid = false;
    for(int i = 1; i < n; ++i){
      int x;
      cin >> x;
      if(x != right+1 && x != left-1) invalid = true;
      else{
        if(x > right) right = x;
        else left = x;
      }
    }
    if(invalid) cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}
