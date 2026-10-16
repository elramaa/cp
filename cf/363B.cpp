#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> h(n + 1, 0);
  vector<int> prefix_sum(n + 1, 0);
  // vector<int> dp(n + 1, 1e9);
  for (int i = 1; i <= n; ++i) {
    cin >> h[i];
    prefix_sum[i] = prefix_sum[i - 1] + h[i];
  }
  int min_sum = 1e9;
  int min_index;
  for (int i = 1; i <= n - k + 1; ++i) {
    int current_sum = prefix_sum[i+k-1] - prefix_sum[i-1];
    if(current_sum < min_sum){
      min_index = i;
      min_sum = current_sum;
    }
  }
  cout << min_index;
  return 0;
}
