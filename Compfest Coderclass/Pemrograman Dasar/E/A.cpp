#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k; cin >> n >> k;
  vector<bool> found(n+1, false);
  while(k--){
    int x; cin >> x;
    found[x] = true;
  }
  for(int i = 1; i <= n; ++i){
    if(!found[i]) cout << i << " ";
  }
  return 0;
}
