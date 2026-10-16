#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; ++i)
    cin >> A[i];
  int q;
  cin >> q;
  while (q--) {
    int x, y;
    cin >> x >> y;
    int p = lower_bound(A.begin(), A.end(), x + 1) - A.begin();
    int q = upper_bound(A.begin(), A.end(), y) - A.begin();
    cout << q - p << "\n";
  }
  return 0;
}
