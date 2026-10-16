#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c; cin >> a >> b >> c;
  int ans = ((a - b) * c + b - 1) / b;
  cout << ans;
  return 0;
}
