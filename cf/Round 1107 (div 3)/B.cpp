#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int x; cin >> x;
    string sx = to_string(x);
    int n = sx.size();
    int y = pow(10, n) + 1;
    cout << y << "\n";
  }
  return 0;
}
