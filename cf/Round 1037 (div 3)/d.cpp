#include <bits/stdc++.h>
using namespace std;

struct Casino {
  int l;
  int r;
  int real;
};

bool casino_sorter(Casino c1, Casino c2) { return c1.l < c2.l; }

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<Casino> casinos(n);
    for (int i = 0; i < n; ++i) {
      cin >> casinos[i].l >> casinos[i].r >> casinos[i].real;
    }
    sort(casinos.begin(), casinos.end(), casino_sorter);
    for (int i = 0; i < n; ++i) {
      if (k >= casinos[i].l) {
        if (casinos[i].real > k) {
          k = casinos[i].real;
        }
      }else{
        break;
      }
    }
    cout << k << "\n";
  }
  return 0;
}
