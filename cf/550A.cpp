#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  int i = 0;
  vector<bool> mark(n, false);
  bool yes = true;
  bool foundAB = false;
  bool foundBA = false;
  while (i < n) {
    if (s[i] == 'A') {
      if (i + 1 < n) {
        if (s[i + 1] == 'B') {
          mark[i] = true;
          mark[i + 1] = true;
          i += 2;
          foundAB = true;
          continue;
        }
      }
      if (i > 0) {
        if (mark[i - 1] && s[i - 1] == 'B') {
          yes = false;
          break;
        }
      }
    } else if (s[i] == 'B') {
      if (i + 1 < n) {
        if (s[i + 1] == 'A') {
          mark[i] = true;
          mark[i + 1] = true;
          i += 2;
          foundBA = true;
          continue;
        }
      }
      if (i > 0) {
        if (mark[i - 1] && s[i - 1] == 'A') {
          yes = false;
          break;
        }
      }
    }
    ++i;
  }
  if (yes && (foundAB || foundBA))
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
