#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    int x = -1;
    bool yes = true;
    for (int i = 0, j = n - 1; i < j; ++i, --j) {
      if(s[i] != s[j]){
        if(i - x > 1 && x != -1){
          yes = false;
          break;
        }
        x = i;
      }
    }
    if(yes) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
