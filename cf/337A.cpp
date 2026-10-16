#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  int f[m];
  for(int i = 0; i < m; ++i) cin >> f[i];
  sort(f, f+m);
  int min_ = 1001;
  for(int i = 0; i <= m - n; ++i){
    min_ = min(min_, f[i + n - 1] - f[i]);
  }
  cout << min_;
  return 0;
}
