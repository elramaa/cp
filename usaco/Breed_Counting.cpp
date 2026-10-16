#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q; cin >> n >> q;
  int cows[n+1];
  for(int i = 1; i <= n; ++i) cin >> cows[i];
  vector prefix(n+1, vector<int>(3, 0));
  // 0 -> id 1, 1 -> id 2, 2 -> id 3
  for(int i = 1; i <= n; ++i){
    prefix[i] = prefix[i-1];
    prefix[i][cows[i]-1]++;
  }
  while(q--){
    int a, b; cin >> a >> b;
    vector<int> vb = prefix[b];
    vector<int> va = prefix[a-1];
    for(int i = 0; i < 3; ++i) cout << vb[i] - va[i] << " ";
    cout << "\n";
  }
  return 0;
}
