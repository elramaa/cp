#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  multiset<int> m;
  multiset<int>::iterator left_it, right_it;
  for (int i = 1; i <= n; ++i) {
    int x;
    cin >> x;
    m.insert(x);
    if (i == 1) {
      left_it = m.begin();
      right_it = m.begin();
    } else {
      if (i % 2 == 1) {
        if(x >= *right_it) left_it++;
        else if(x < *left_it) right_it--;
        else {
          left_it++;
          right_it--;
        }
      } else {
        if(x >= *right_it) right_it++;
        else if(x < *left_it) left_it--;
      }
    }
    float med = float(*left_it + *right_it) / 2;
    cout << med << "\n";
  }
  return 0;
}
