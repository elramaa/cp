#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  string x[n];
  string y[n];
  string _;
  for(int i = 0; i < n; ++i){
    cin >> x[i];
    for(int j = 0; j < 4; ++j) cin >> _;
    cin >> y[i];
  }
  return 0;
}
