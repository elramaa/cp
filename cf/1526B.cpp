#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int x; cin >> x;
    // using chicken mcnugget theorem, if two numbers are relatively prime, 
    // the maximum number can be formed by those two numbers are ab-a-b
    // In this case, those two numbers are 11 and 111
    // so , 11.111 - 111 - 11 = 1099
    if(x > 1099){
      cout << "YES\n";
      continue;
    }
    bool can = false;
    for(int i = 0; i < 10; ++i){
      for(int j = 0; j < 100; ++j){
        if(111 * i + 11 * j == x){
          can = true;
          break;
        }
      }
      if(can) break;
    }
    if(can) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
