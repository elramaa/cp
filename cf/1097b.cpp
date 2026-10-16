#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> A, int deg) {
  if (A.size() == 0) {
    return deg == 0;
  }
  int x = A.back();
  A.pop_back();
  return solve(A, (deg + x) % 360) || solve(A, (deg - x) % 360);
}

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; ++i) {
    cin >> A[i];
  }
  if(solve(A, 0)) cout << "YES";
  else cout << "NO";
  return 0;
}
