#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    ll A[n];
    for(int i = 0; i < n; ++i) cin >> A[i];
    sort(A, A+n);
    bool able = false;
    ll sr, sb;
    sr = A[n-1];
    sb = A[0];
    for(int i = 0, j = n-1; i < j;){
      if(sr > sb && (n-j) < (i+1)){
        able = true;
        break;
      }else if(sr <= sb){
        --j;
        sr += A[j];
      }else if((n-j) >= (i+1)){
        ++i;
        sb += A[i];
      }
    }
    if(able) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
