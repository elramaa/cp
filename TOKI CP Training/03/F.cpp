#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> A(n+1);
  A[0] = 0;
  for(int i = 1; i <= n; ++i){
    int x;
    cin >> x;
    A[i] = A[i-1] + x;
  }
  int q;
  cin >> q;
  while(q--){
    int x;
    cin >> x;
    int ans = lower_bound(A.begin(), A.end(), x) - A.begin();
    cout << ans << "\n";
  }
  return 0;
}
