#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  int maxRest = 0;
  int curRest = 0;
  int lRest = 0, rRest = 0;
  for(int i = 0; i < n; ++i){
    if(a[i] == 1){
      curRest += 1;
    }else{
      curRest = 0;
    }
    maxRest = max(maxRest, curRest);
  }
  if(a[0] == 1){
    lRest = 1;
    for(int i = 1; i < n; ++i){
      if(a[i] == 1) lRest++;
      else break;
    }
  }
  if(a[n-1] == 1){
    rRest = 1;
    for(int i = n - 2; i >= 0; --i){
      if(a[i] == 1) rRest++;
      else break;
    }
  }
  maxRest = max(maxRest, lRest + rRest);
  cout << maxRest;
  return 0;
}
