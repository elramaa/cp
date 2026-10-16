#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    int min_ = 10;
    // call the smallest digit
    while (x > 0) {
      min_ = min(min_, x % 10);
      x /= 10;
    }
    cout << min_ << "\n";
  }
  return 0;
}
