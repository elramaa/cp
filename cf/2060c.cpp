#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int X[n];
    map<int, int> nums;
    int score = 0;
    for (int i = 0; i < n; ++i) {
      cin >> X[i];
      if (X[i] < k)
        nums[X[i]]++;
      // only count the number less than k, because if it's more than x, then it
      // is no use to count it as it doesnt give score
    }
    for (auto it = nums.begin(); it != nums.end(); ++it) {
      // For every number less than k, we check for every possible pair
      // Except if the number k - x equal to the number itself, then the score would be count of the numbers divided by two
      if(it->first == k - it->first){
        int s = it->second / 2;
        score += s;
        continue;
      }
      int s = min(it->second, nums[k - it->first]);
      it->second -= s;
      nums[k - it->first] -= s;
      score += s;
    }
    cout << score << "\n";
  }
  return 0;
}
