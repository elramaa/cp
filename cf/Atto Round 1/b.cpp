#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    string s;
    cin >> n >> x >> s;
    x--;
    int ans = 0;
    int left_walls = 0;
    int right_walls = 0;
    int left_i, right_i;
    left_i = right_i = -1;
    for (int i = 0; i < n; ++i) {
      if (s[i] == '#' && i < x) {
        left_i = i;
        left_walls++;
      } else if (s[i] == '#' && i > x) {
        if(right_i == -1) right_i = i;
        right_walls++;
      }
    }
    if(left_walls < right_walls && left_walls != left_i + 1) left_walls++;
    else right_walls++;
    ans = 1 + min(left_walls, right_walls);
    cout << ans << "\n";
  }
  return 0;
}
