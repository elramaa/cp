#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int W[n];
    for (int i = 0; i < n; ++i)
      cin >> W[i];
    int best = 0;
    for (int sum = 2; sum <= 2 * n; ++sum) {
      vector<int> counters(101, 0);
      int pairs = 0;
      for (int w: W) {
        if (sum > w && counters[sum - w] != 0) {
          counters[sum - w]--;
          pairs++;
        } else {
          counters[w]++;
        }
      }
      best = max(best, pairs);
    }
    cout << best << "\n";
  }
  return 0;
}
