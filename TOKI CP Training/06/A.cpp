#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, b;
  cin >> n >> b;
  int H[n];
  for (int i = 0; i < n; ++i)
    cin >> H[i];
  sort(H, H + n);
  int sum = 0;
  int cnt = 0;
  for (int i = n - 1; i >= 0; --i) {
    cnt++;
    sum += H[i];
    if (sum >= b)
      break;
  }
  cout << cnt;
  return 0;
}
