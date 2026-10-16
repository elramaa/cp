#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ll n, m;
  cin >> n >> m;
  ll sum_a, sum_b;
  int min_b = 1e5 + 1;
  sum_a = sum_b = 0;
  vector<ll> B(1e5 + 1, 0);

  for (int i = 0; i < n; ++i) {
    ll x;
    cin >> x;
    sum_a += x;
  }

  for (int i = 0; i < m; ++i) {
    int x;
    cin >> x;
    min_b = min(x, min_b);
    B[x]++;
    sum_b += x;
  }

  double avg_a = (double)sum_a / n;
  double avg_b = (double)sum_b / m;

  ll ans = 0;
  if (avg_a > avg_b) {
    cout << ans;
  } else {
    for (int i = 1e5 + 1; i > 0; --i) {
      if (i == min_b) {
        ans += i * (B[i] - 1);
        sum_a += i * (B[i] - 1);
        sum_b -= i * (B[i] - 1);
        n += (B[i] - 1);
        m -= (B[i] - 1);
      } else {
        ans += i * B[i];
        sum_a += i * B[i];
        sum_b -= i*B[i];
        n += B[i];
        m -= B[i];
      }
      avg_a = (double)sum_a / n;
      avg_b = (double)sum_b / m;
      if(avg_a > avg_b){
        cout << ans;
        break;
      }
    }
  }
  if(avg_a < avg_b){
    cout << -1;
  }
  return 0;
}
