#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll inversion = 0;

void merge(int arr[], int l1, int r1, int l2, int r2) {
  vector<int> temp{};
  int i = l1;
  int j = l2;
  while (i <= r1 && j <= r2) {
    if (arr[i] <= arr[j])
      temp.push_back(arr[i++]);
    else {
      temp.push_back(arr[j++]);
      inversion += r1 - i + 1;
    }
  }
  while (i <= r1)
    temp.push_back(arr[i++]);
  while (j <= r2)
    temp.push_back(arr[j++]);
  for (int i = l1, j = 0; i <= r2; ++i, ++j) {
    arr[i] = temp[j];
  }
}

void merge_sort(int arr[], int l, int r) {
  if (l == r) {
    return;
  }
  int mid = (l + r) / 2;
  merge_sort(arr, l, mid);
  merge_sort(arr, mid + 1, r);
  merge(arr, l, mid, mid + 1, r);
}

int main() {
  int n;
  cin >> n;
  int A[n];
  for (int i = 0; i < n; ++i)
    cin >> A[i];
  merge_sort(A, 0, n - 1);
  cout << inversion;
  return 0;
}
