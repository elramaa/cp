#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll a, n;
    cin >> a >> n;
    int d[n];
    for (int i = 0; i < n; ++i)
      cin >> d[i];
    string a_str = to_string(a);

    pair<ll, ll> ans[3] = {{0, 0}};
    // first -> b, second -> a - b
    // Answer 1: Exactly same digit
    int len0 = 0;
    int diff = 10;
    for (int i = a_str.size() - 1, j = 0; i >= 0; --i, ++j) {
      int aj = a_str[j] - '0';
      diff = 10;
      int digit;
      for (int k = 0; k < n; ++k) {
        if(d[k] == 0 && j == 0) continue;
        if (abs(d[k] - aj) < abs(diff)) {
          diff = d[k] - aj;
          digit = d[k];
        }
      }
      ans[0].first += digit * pow(10, i);
      ++len0;
      if (diff != 0)
        break;
    }
    if (diff > 0) {
      for (int i = a_str.size() - 1 - len0; i >= 0; --i) {
        ans[0].first += d[0] * pow(10, i);
      }
    } else if (diff < 0) {
      for (int i = a_str.size() - 1 - len0; i >= 0; --i) {
        ans[0].first += d[n - 1] * pow(10, i);
      }
    }
    ans[0].second = abs(a - ans[0].first);
    // Answer 2: One digit more
    for (int i = a_str.size(); i >= 0; --i) {
      if (d[0] != 0)
        ans[1].first += d[0] * pow(10, i);
      else
        ans[1].first += d[1] * pow(10, i);
    }
    ans[1].second = abs(a - ans[1].first);
    // Answer 3: One digit less
    for (int i = a_str.size() - 2; i >= 0; --i) {
      ans[2].first += d[1] * pow(10, i);
    }
    if(a_str.size() == 1){
      ans[2].first = INT64_MAX;
    }
    ans[2].second = abs(a - ans[2].first);
    // cout << min({ans[0].second, ans[1].second, ans[2].second}) << "\n";
    // cout << "Answer: ";
    cout << ans[0].first << " " << ans[1].first << " " << ans[2].first << "\n";
  }
  return 0;
}
