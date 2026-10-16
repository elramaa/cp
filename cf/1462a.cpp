#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int B[n];
    for(auto &b: B) cin >> b;
    for(int i = 0, j = n-1; i <= j; ++i, --j){
      if(i == j) cout << B[i];
      else cout << B[i] << " " << B[j] << " ";
    }
    cout << "\n";
  }
  return 0;
}
