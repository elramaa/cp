#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll b, k;
  cin >> b >> k;
  ll diff = k - b;
  string binary_diff = "";
  while (diff != 0) {
    binary_diff += to_string(diff % 2);
    diff /= 2;
  }
  reverse(binary_diff.begin(), binary_diff.end());
  for (ll i = 0; i < binary_diff.size(); ++i) {
    if (binary_diff[i] == '1') {
      cout << (ll)pow(2, binary_diff.size() - i - 1) << "\n";
    }
  }
  return 0;
}
