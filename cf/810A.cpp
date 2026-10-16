#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k; cin >> n >> k;
  int sum = 0;
  for(int i = 0; i < n; ++i){
    int a; cin >> a;
    sum += a;
  } 
  int x = max(((k - 0.5) * n - sum) / 0.5, (double) 0);
  cout << x;
  return 0;
}
