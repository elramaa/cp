#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  while(n--){
    int c, sum; cin >> c >> sum;
    int n = pow(sum / c, 2);
    int ans = n * c;
    ans -= n * (sum % c);
    ans += pow(sum / c + 1, 2) * (sum % c);
    cout << ans << "\n";
  }
  return 0;
}
