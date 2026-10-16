#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if(b == 0) return a;
  return gcd(b, a % b);
}

int main(){
  int n;
  cin >> n;
  vector<int> D(n);
  for(int i = 0; i < n; ++i) cin >> D[i];
  int ans = D[0] / gcd(D[0], D[1]) * D[1];
  for(int i = 2; i < n; ++i){
    ans = D[i] / gcd(D[i], ans) * ans;
  }
  cout << ans;
  return 0;
}
