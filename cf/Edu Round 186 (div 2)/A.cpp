#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n;
    cin >> s;
    bool contain2025 = false;
    bool contain2026 = false;
    for (int i = 0; i < n - 3; ++i) {
      if (s[i] == '2' && s[i + 1] == '0' && s[i + 2] == '2') {
        if (s[i + 3] == '5')
          contain2025 = true;
        if (s[i + 3] == '6')
          contain2026 = true;
      }
    }
    if (contain2026) {
      cout << 0;
    } else {
      if (contain2025) {
        cout << 1;
      } else {
        cout << 0;
      }
    }
    cout << "\n";
  }
  return 0;
}
