#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int mod = n % 2020;
    if(mod * 2020 > n) cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}
