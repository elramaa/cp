#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int ans = 0;
  for(int a = 0; a <= n; ++a){
    ans += n - a + 1;
  }
  cout << ans;
  return 0;
}
