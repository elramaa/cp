#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;


int main(){
  bool answerZero = false;
  int cntNotZero = 0;
  int n; cin >> n;
  int A[n];
  map<int, int> X;
  for(int i = 0; i < n; ++i) cin >> A[i];
  for(int i = 0; i < n; ++i){
    int b; cin >> b;
    X[A[i]] = b;
  }

  int m; cin >> m;
  int C[m];
  for(int i = 0; i < m; ++i) cin >> C[i];
  for(int i = 0; i < m; ++i){
    int d; cin >> d;
    if(X.count(C[i]) == 0){
      answerZero = true;
      continue;
    }
    X[C[i]] -= d;
  }

  for(int i = 0; i < n; ++i){
    if(X[A[i]] < 0) answerZero = true;
    else if(X[A[i]] > 0) cntNotZero++;
  }

  if(answerZero) cout << 0;
  else {
    int ans = 1;
    for(int i = 1; i <= cntNotZero; ++i) ans = (ans * 2) % MOD;
    cout << ans;
  }

  return 0;
}
