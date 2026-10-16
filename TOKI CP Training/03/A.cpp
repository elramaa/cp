#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> A(n);
  int min_ = INT32_MAX;
  int y = INT32_MAX;
  for (int i = 0; i < n; ++i) {
    cin >> A[i];
    if (abs(A[i] - x) <= min_) {
      if(abs(A[i] - x) == min_){
        y = min(y, A[i]);
      }else{
        y = A[i];
      }
      min_ = abs(A[i] - x);
    }
  }
  cout << y;
  return 0;
}
