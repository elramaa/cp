#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin >> n;
  for(int a = 0; a <= 1000; a += 3){
    for(int b = 0; b <= 1000; b += 5){
      if(max(n - a - b, -1) % 7 == 0){
        printf("%d %d %d\n", a / 3, b / 5, (n - a - b) / 7);
        return;
      }
    }
  }
  cout << -1 << "\n";
}

int main(){
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
