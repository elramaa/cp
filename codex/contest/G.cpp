#include <bits/stdc++.h>
using namespace std;

int main(){
  string m, n; cin >> m >> n;
  for(int i = 0; i < m.size(); ++i){
    m[i] = tolower(m[i]);
    n[i] = tolower(n[i]);
  }
  if(m < n) cout << -1;
  else if(m > n) cout << 1;
  else cout << 0;
  return 0;
}
