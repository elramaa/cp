#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int odd = 0, multipleOfTwo = 0, multipleOfFour = 0;
    while(n--){
      int x; cin >> x;
      if(x % 2 == 1) odd++;
      else if(x % 4 == 0) multipleOfFour++;
      else multipleOfTwo++;
    }
    cout << max({ odd, multipleOfTwo, multipleOfFour }) << "\n";
  }
  return 0;
}
