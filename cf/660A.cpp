#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a;
  for(int i = 0; i < n; ++i){
    int x; cin >> x;
    a.push_back(x);
  }
  map<int, int> after;
  int cnt = 0;
  for(int i = 0; i < n - 1; ++i){
    if(gcd(a[i], a[i+1]) != 1){
      ++cnt;
      after[i] = 1;
    }
  }
  cout << cnt << "\n";
  for(int i = 0; i < n; ++i){
    cout << a[i] << " ";
    if(after.count(i) > 0) cout << after[i] << " ";
  }
  return 0;
}
