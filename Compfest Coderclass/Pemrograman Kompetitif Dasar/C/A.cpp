#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q; cin >> n >> q;
  int P[n];
  for(int i = 0; i < n; ++i) cin >> P[i];
  sort(P, P+n);
  while(q--){
    int x; cin >> x;
    cout << P[x - 1] << "\n";
  }
  return 0;
}
