#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int factor = 0;
    for(int i = 1; i*i <= n; ++i){
      if(n % i == 0){
        if(i == n / i) factor++;
        else factor += 2;
        if(factor > 4) break;
      }
    }
    if(factor <= 4) cout <<  "YA";
    else cout << "BUKAN";
    cout << "\n";
  }
  return 0;
}
