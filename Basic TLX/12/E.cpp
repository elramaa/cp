#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, d;
  cin >> n >> d;
  vector<pair<int, int>> M(n);
  int min_ = INT32_MAX;
  int max_ = 0;
  for(int i = 0; i < n; ++i){
    int x, y;
    cin >> x >> y;
    M[i] = {x, y};
    for(int j = 0; j < i; ++j){
      int t = pow(abs(M[i].first - M[j].first), d) + pow(abs(M[i].second - M[j].second), d);
      min_ = min(min_, t);
      max_ = max(max_, t);
    }
  }
  cout << min_ << " " << max_;
  return 0;
}
