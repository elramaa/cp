#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int A[n];
    for(int i =0; i < n; ++i) cin >> A[i];
    sort(A, A+n);
    int sum = 0;
    for(int i = 0, j = n-1; i < n/2; ++i, --j){
      sum += A[j] - A[i];
    }
    cout << sum << "\n";
  }
  return 0;
}
