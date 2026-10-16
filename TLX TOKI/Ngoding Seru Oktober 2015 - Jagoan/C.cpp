#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int A[n];
    int count_zero, count_positive, count_negative;
    count_zero = count_positive = count_negative = 0;
    for (int i = 0; i < n; ++i) {
      cin >> A[i];
      if (A[i] > 0)
        count_positive++;
      else if (A[i] < 0)
        count_negative++;
      else
        count_zero++;
    }
    sort(A, A + n);
    if (count_zero != 0) {
      // Zero patterns
      if (count_zero == n) {
        for (auto x : A) {
          cout << x << " ";
        }
      } else if (count_zero == n / 2) {
        int left = n;
        for (int i = 0; i < n; ++i) {
          if (A[i] == 0)
            continue;
          if (left != 1) {
            cout << A[i] << " " << 0 << " ";
            left -= 2;
          } else {
            cout << A[i];
          }
        }
      } else if (count_zero == (n + 1) / 2) {
        for (auto x : A) {
          if (x == 0)
            continue;
          cout << 0 << " " << x << " ";
        }
        cout << 0;
      } else {
        cout << "mustahil";
      }
    } else {
      if (count_negative == n || count_positive == n) { // Positive Patterns
        for (auto x : A) {
          cout << x << " ";
        }
      } else if (count_negative == n / 2) { // Negative patterns
        for (int i = 0; i < n / 2; ++i) {
          cout << A[n - i - 1] << " " << A[i] << " ";
        }
        if (n % 2 == 1)
          cout << A[n / 2];
      } else if (count_negative == (n + 1) / 2) { // Negative patterns
        for (int i = 0; i < n / 2; ++i) {
          cout << A[i] << " " << A[n - i - 1] << " ";
        }
        cout << A[n / 2];
      } else {
        cout << "mustahil";
      }
    }
    cout << "\n";
  }
  return 0;
}
