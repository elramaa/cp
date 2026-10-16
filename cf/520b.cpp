#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  // n -> m
  int X[m+1];
  int ans;
  for(int i = n; i > 0 ; --i){
    X[i] = n - i;
  }
  for(int i = n+1; i <= m; ++i){
    X[i] = min(1 + n*2 - i, X[(i+1)/2] + 1 + ((i+1)/2) * 2 + - i);
  }
  cout << X[m];
  return 0;
}
