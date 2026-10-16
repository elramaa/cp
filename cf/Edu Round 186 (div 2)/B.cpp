#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll a, b;
    cin >> a >> b;
    ll a2 = a;
    ll b2 = b;

    int layer1 = 0;
    int layer2 = 0;
    {
      int i = 1;
      ll x = 1;
      while (true) {
        if (i % 2 == 1) {
          if (a < x)
            break;
          a -= x;
          layer1++;
        } else {
          if (b < x)
            break;
          b -= x;
          layer1++;
        }
        i++;
        x *= 2;
      }
    }
    {
      int i = 1;
      ll x = 1;
      while (true) {
        if (i % 2 == 1) {
          if (b < x)
            break;
          b -= x;
          layer2++;
        } else {
          if (a < x)
            break;
          a -= x;
          layer2++;
        }
        i++;
        x *= 2;
      }
    }
    cout << max(layer1, layer2) << "\n";
  }
  return 0;
}
