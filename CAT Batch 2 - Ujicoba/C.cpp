#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s, t;
  cin >> n >> s >> t;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  string sx = min(s, t);
  string tx = max(s, t);
  for(int i = 0; i < n; ++i){
    cout << sx[i] << tx[i];
  }
  return 0;
}
