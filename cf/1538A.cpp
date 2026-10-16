#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    int greatest_index, lowest_index, greatest, lowest;
    greatest = 0;
    lowest = 1e5;
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      if (a[i] > greatest) {
        greatest = a[i];
        greatest_index = i;
      }
      if (a[i] < lowest) {
        lowest = a[i];
        lowest_index = i;
      }
    }
    int l = 0, r = n - 1;
    int cnt = 0;
    int lowest_from_left = lowest_index - l + 1;
    int lowest_from_right = abs(lowest_index - r) + 1;
    if(lowest_from_left > lowest_from_right){
    }
    cout << cnt << "\n";
  }
  return 0;
}
