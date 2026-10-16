#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(){
  int n, k; cin >> n >> k;
  int a[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  sort(a, a+n);
  // make groups
  vector<vi> groups(k, vi{});
  int x = 0;
  for(int i = 0; i < n; ++i){
    groups[x].push_back(a[i]);
    x = (x+1) % k;
  }
  // search for minimum
  int min_ = 1e9;
  for(auto g: groups){
    int sz = g.size();
    min_ = min(g[(sz + 1) / 2 - 1], min_);
  }
  cout << min_;
  return 0;
}
