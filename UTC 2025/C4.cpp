#include <bits/stdc++.h>
using namespace std;

int utc(int tanma, int pana){
  if(tanma < 0 || pana < 0 || pana > tanma) return 0;
  if(tanma == 0 && pana == 0) return 1;
  return utc(tanma - 1, pana) + utc(tanma - 1, pana - 1);
}

int main(){
  int ans = 0;
  for(int i = 0; i < 10; ++i){
    for(int j = 0; j < 10; ++j){
      ans += utc(i, j);
    }
  }
  cout << ans;
  // cout << utc(2025, 2024);
  return 0;
}
