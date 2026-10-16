#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;
    if(n <= 3){
      cout << 1 << "\n";
      continue;
    }
    cout << min({abs(x1 - x2), abs(x1 + n - x2), abs(x2 + n - x1)}) + k << "\n";
  }
  return 0;
}
