#include <bits/stdc++.h>
using namespace std;

int main() {
  deque<int> qu;
  int q;
  cin >> q;
  bool reversed = false;
  while (q--) {
    string s;
    cin >> s;
    if (s == "add") {
      int x, y;
      cin >> x >> y;
      if (!reversed) {
        for (int i = 0; i < y; ++i) {
          qu.push_back(x);
        }
      } else {
        for (int i = 0; i < y; ++i) {
          qu.push_front(x);
        }
      }
      cout << qu.size() << "\n";
    } else if (s == "del") {
      int y;
      cin >> y;
      if (!reversed) {
        cout << qu.front() << "\n";
        while (y--) {
          qu.pop_front();
        }
      } else {
        cout << qu.back() << "\n";
        while (y--) {
          qu.pop_back();
        }
      }
    } else if (s == "rev") {
      reversed = !reversed;
    }
  }
  return 0;
}
