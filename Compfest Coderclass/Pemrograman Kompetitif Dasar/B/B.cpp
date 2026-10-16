#include <bits/stdc++.h>
using namespace std;

int main(){
  double p; cin >> p;
  if(p == 0){
      cout << 0;
      return 0;
  }
  double ans = 1 / (2 - p/100);
  cout << fixed << setprecision(6) << ans;
  return 0;
}
