#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int k;
  cin >> k;
  pair<ll, ll> X[k];
  for(int i = 0; i < k; ++i) cin >> X[i].second;
  for(int i = 0; i < k; ++i) cin >> X[i].first;
  sort(X, X+k);

  int n;
  cin >> n;
  ll b[n];
  for(int i = 0; i < n; ++i) cin >> b[i];
  sort(b, b+n);

  ll cost = 0;
  for(int i = n-1, j = 0; i >= 0 && j < k; --i){
    cost += X[j].first * b[i];
    X[j].second--;
    if(X[j].second == 0) ++j;
  }

  cout << cost;
  return 0;
}
