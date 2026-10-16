#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if(b == 0) return a;
  return gcd(b, a % b);
}

int main(){
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  vector<int> prefix(n, 0), postfix(n, 0);
  prefix[0] = a[0];
  postfix[n-1] = a[n-1];
  for(int i = 1; i < n; ++i){
    prefix[i] = gcd(prefix[i-1], a[i]);
    postfix[n-i-1] = gcd(postfix[n-i], a[n-i-1]);
  }
  int max_ = 0;
  for(int i = 0; i < n; ++i){
    int a = i > 0 ? prefix[i-1] : 0;
    int b = i < n - 1 ? postfix[i+1] : 0;
    max_ = max(max_, gcd(a, b));
  }
  cout << max_;
  return 0;
}
