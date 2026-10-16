#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;
  vector<bool> ada_bebek(20001, false);
  vector<int> bebek;
  for (int i = 0; i < m; ++i) {
    int b;
    cin >> b;
    if (!ada_bebek[b]) {
      bebek.push_back(b);
      ada_bebek[b] = true;
    }
  }
  sort(bebek.begin(), bebek.end());
  for(auto x: bebek) cout << x << " ";
  cout << "\n";
  int sz = bebek.size();

  int n;
  cin >> n;
  for (int i = 0; i < n - 1; ++i) {
    cout << bebek[i] + 1 << " ";
  }

  return 0;
}
