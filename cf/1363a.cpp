#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    int odds = 0;
    for (int i = 0; i < n; ++i) {
      int X;
      cin >> X;
      if (X % 2 == 1)
        odds++;
    }
    int evens = n - odds;
    bool yes = false;
    for(int i = 1; i <= odds && i <= x; i += 2){
      if(x - i <= evens){
        yes = true;
        break;
      }
    }
    if(yes) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}
