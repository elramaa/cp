#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    char c;
    string s;
    cin >> n >> c >> s;
    if (c == 'g') {
      cout << 0;
    } else {
      int ans = 0;
      s += s;
      n *= 2;
      for (int i = 0, j = 0; i < n && j < n;) {
        if (s[i] != c) {
          j = ++i;
        } else {
          while (s[j] != 'g' && j < n) {
            ++j;
          }
          ans = max(ans, j - i);
          i = ++j;
        }
      }
      cout << ans;
    }
    cout << "\n";
  }
  return 0;
}
