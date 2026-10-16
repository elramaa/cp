#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  int m; cin >> m;

  int n = s.size();
  vector<int> prefix(n+1, 0);
  for(int i = 1; i < n; ++i){
    prefix[i] = prefix[i-1];
    if(s[i-1] == s[i]) prefix[i]++;
  }
  prefix[n] = prefix[n-1];

  while(m--){
    int l, r; cin >> l >> r;
    cout << prefix[r-1] - prefix[l-1] << "\n";
  }
  return 0;
}
