#include <bits/stdc++.h>
using namespace std;

int main(){
  int x, base;
  cin >> x >> base;
  string res = "";
  while(x != 0){
    res += to_string(x % base);
    x /= base;
  }
  reverse(res.begin(), res.end());
  cout << res;
  return 0;
}
