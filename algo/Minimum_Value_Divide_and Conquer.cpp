#include <bits/stdc++.h>
using namespace std;

int find_min(vector<int> arr, int l, int r) {
  if (r - l == 1) {
    return min(arr[l], arr[r]);
  } else if (r == l) {
    return arr[r];
  } else if (r - l == 2) {
    return min({arr[l], arr[r], arr[l + 1]});
  }
  int sz = (r - l) / 3;
  int mid_l = l + sz;
  int mid_r = l + 2 * sz;
  return min({find_min(arr, l, mid_l), find_min(arr, mid_l + 1, mid_r),
              find_min(arr, mid_r + 1, r)});
}

int main() {
  vector<int> nums{10, 3, 5, 9, 2, 4};
  cout << find_min(nums, 0, 5);
  return 0;
}
