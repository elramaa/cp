#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; ++i) cin >> A[i];
    int ans = 0;
    for(int i = 0, j = n-1; i < j;){
      if(A[i] == 1 && A[j] == 0){
        ans++;
        ++i;
        --j;
      }else{
        if(A[i] != 1) ++i;
        if(A[j] != 0) --j;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
