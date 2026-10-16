#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  int h[n];
  for(int i = 0; i < n; ++i) cin >> h[i];
  ll sum = 0;
  stack<pair<int, ll>> s; // first -> height, second -> count
  for(int i = 0; i < n; ++i){
    ll cnt = 1;
    while(!s.empty() && s.top().first <= h[i]){
      cnt += s.top().second;
      s.pop();
    }
    s.push({h[i], cnt});
    sum += cnt;
  }
  cout << sum;
  return 0;
}
