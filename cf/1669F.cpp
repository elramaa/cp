#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int w[n];
    for(int i = 0; i < n; ++i) cin >> w[i];
    int leftSum = 0, rightSum = 0;
    int ans = 0;
    for(int i = -1, j = n; j - i > 1; ){
      if(leftSum <= rightSum){
        leftSum += w[++i];
        if(leftSum == rightSum){
          ans = i + 1 + n - j;
        }
      }else{
        rightSum += w[--j];
        if(leftSum == rightSum){
          ans = i + 1 + n - j;
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
