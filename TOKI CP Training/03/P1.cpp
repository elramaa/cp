#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> A(n+1);
  A[0] = 0;
  for(int i = 1; i <= n; ++i){
    int x;
    cin >> x;
    A[i] = A[i-1] + x;
  }
  for(int i = 1; i <= k; ++i){
    int b;
    cin >> b;
    int ans = upper_bound(A.begin(), A.end(), b) - A.begin() - 1;
    cout << ans << "\n";
  }
  return 0;
}
