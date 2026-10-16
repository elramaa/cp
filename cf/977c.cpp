#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> A(n);
  for (int i = 0; i < n; ++i) {
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  if (k == 0) {
    if(A[0] == 1) cout << -1;
    else cout << A[0] - 1;
  } else {
    if (A[k - 1] == A[k]) {
      cout << -1;
    } else {
      cout << A[k - 1];
    }
  }
  return 0;
}
