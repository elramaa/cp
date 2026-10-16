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
    cin >> A[0];
    ll best = A[0]; // pick best for every positive / negative numbers
    ll sum = 0;
    for(int i = 1; i < n; ++i){
      cin >> A[i];
      if((A[i] > 0 && best < 0) || (A[i] < 0 && best > 0)){
        sum += best;
        best = A[i];
        continue;
      }
      best = max(best, A[i]);
    }
    sum += best; // we do this because the last number doesn't receive the if
    cout << sum << "\n";
  }
  return 0;
}
