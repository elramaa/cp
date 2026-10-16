#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  vector<ll> V(n+1, 0);
  vector<ll> V1_sums(n+1, 0);
  vector<ll> V2_sums(n+1, 0);
  for(int i = 1; i <= n; ++i){
    cin >> V[i];
    V1_sums[i] = V[i] + V1_sums[i-1];
  }
  vector<ll> V2 = V;
  sort(V2.begin(), V2.end());
  for(int i = 1; i <= n; ++i){
    V2_sums[i] = V2[i] + V2_sums[i-1];
  }
  int m;
  cin >> m;
  while(m--){
    int type, l, r;
    cin >> type >> l >> r;
    if(type == 1){
      cout << V1_sums[r] - V1_sums[l-1];
    }else if(type == 2){
      cout << V2_sums[r] - V2_sums[l-1];
    }
    cout << "\n";
  }
  return 0;
}
