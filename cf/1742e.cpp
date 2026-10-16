#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, q;
    cin >> n >> q;
    ll A[n];
    ll S[n];
    vector<int> M(n);
    ll max_;
    for(int i = 0; i < n; ++i){
      cin >> A[i];
      if(i > 0){
        S[i] = A[i] + S[i-1];
        max_ = max(max_, A[i]);
      }else{
        S[i] = A[i];
        max_ = A[i];
      }
      M[i] = max_;
    }
    for(int i = 0; i < q; ++i){
      int k;
      cin >> k;
      int index = upper_bound(M.begin(), M.end(), k)-M.begin()-1;
      if(index < 0) cout << "0 ";
      else cout << S[index] << " ";
    }
    cout << "\n";
  }
  return 0;
}
