#include <bits/stdc++.h>
using namespace std;
int mod = 998244353;

void move_slime(pair<int, bool> &s, int n, int move) {
  int res;
  if (s.second) {
    res = s.first + move;
    s.first = res;
    if (res > n) {
      int x = res / n;
      if (x % 2 == 0) {
        s.first = res % n;
      } else {
        s.first = n - (res % n);
        s.second = 0;
      }
    }
  } else {
    res = s.first - move;
    s.first = res;
    if(res < 0){
      int x = abs(res / n);
      if (x % 2 == 0) {
        s.first = res % n;
      } else {
        s.first = n - (res % n);
        s.second = 0;
      }
    }
  }
}

int main() {
  int n, d, k;
  cin >> n >> d >> k;
  vector<pair<int, bool>>
      slime; // first -> pos, second -> right (1) or left (0)
  slime.push_back({1, 1});
  while (k--) {
    int x = slime.size();
    for (auto &s : slime) {
      // for each slime, add them by one and duplicate until d
      s.first += 1;
      for (int j = 2; j <= d; ++j) {
      }
      // pair<int, int> s = slime[i];
      // for(int j = 2; j <= d; ++j){
      //   slime.push_back({s.first + j, 1});
      //   pair<int, int> ss = slime.back();
      //   if(ss.first > n){
      //     slime.back() = {n - (ss.first % n), -1};
      //   }
      // }
    }
  }
  int sum = 0;
  for (auto s : slime) {
    sum += s.first % mod;
    sum %= mod;
  }
  cout << sum;
  return 0;
}
