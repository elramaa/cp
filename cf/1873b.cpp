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
    ll mult = 1;
    ll best = mult;
    bool z_found = false;
    for(int i = 0; i < n; ++i){
      cin >> A[i];
      if(A[i] != 0 && !z_found) mult *= A[i];
      else{
        if(!z_found) {
          z_found = true;
          mult *= (A[i] + 1);
        }else{
          mult *= A[i];
        }
      }
      best = mult;
    }
    if(!z_found){
      for(int i = 0; i < n; ++i){
        best = max(mult/A[i]*(A[i]+1), best);
      }
    }
    cout << best << "\n";
  }
  return 0;
}
