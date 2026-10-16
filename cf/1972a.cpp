#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    deque<int> A(n), B(n);
    for(int i = 0; i < n; ++i) cin >> A[i];
    for(int i = 0; i < n; ++i) cin >> B[i];
    int ans = 0;
    for(int i = 0; i < n; ++i){
      if(A[i] > B[i]){
        A.pop_back();
        A.push_front(B[i]);
        ans++;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
