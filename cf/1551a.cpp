#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int c1 = n / 3;
    int c2 = (n + 3 - 1) / 3;
    if (c1 + c2 * 2 != n)
      swap(c1, c2);
    cout << c1 << " " << c2 << "\n";
  }
  return 0;
}
