#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int A[n], B[n];
    for(int i = 0; i < n; ++i) cin >> A[i];
    for(int i = 0; i < n; ++i) cin >> B[i];
    int ans = 0;
    bool no_step1 = false;
    while(!no_step1){
      no_step1 = true;
      for(int i = 0; i < n; ++i){
        if(A[i] > B[i]){
          --A[i];
          no_step1 = false;
          break;
        }
      }
      for(int i = 0; i < n; ++i){
        if(A[i] < B[i]){
          A[i]++;
          break;
        }
      }
      ans++;
    }
    cout << ans << "\n";
  }
  return 0;
}
