#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<ll> A(n);
    ll sum = 0;
    for(int i = 0; i < n; ++i){
      cin >> A[i];
      sum += abs(A[i]);
    }
    int move = 0;
    bool prev_negative = false;
    for(int i = 0, j = 0; i < n; ++i){
      if(A[i] > 0) prev_negative = false;
      if(A[i] < 0 && !prev_negative){
        prev_negative = true;
        move++;
      }
    }
    cout << sum << " " << move << "\n";
  }
  return 0;
}
