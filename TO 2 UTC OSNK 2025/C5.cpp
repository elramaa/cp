#include <bits/stdc++.h>
using namespace std;

int pana[232323];

int bangkit(int n){
  for(int i = 0; i < n; ++i){
    // cout << pana[i] << " ";
    for(int j = i+1; j < n; ++j){
      if((pana[i] & pana[j]) != pana[j]) return 0;
    }
  }
  // cout << "\n";
  return 1;
}

int aktualisasi(int t, int a, int n, int ma){
  if(a == t) return bangkit(t);
  int u = 0;
  for(int i = 0; i < n; ++i){
    pana[a] = i;
    u = (u + aktualisasi(t, a+1, n, ma)) % ma;
  }
  return u;
}

bool diam(int x){
  pana[0] = 23; pana[1] = x;
  return (bangkit(2) == 1);
}

int main(){
  cout << aktualisasi(2, 0, 5, 2025);
  // int cnt = 0;
  // for(int i = 0; i <= 23; ++i){
  //   int x = diam(i);
  //   cnt += x;
  //   cout << "diam(" << i << "): " << x << "\n";
  // }
  // cout << cnt;
  return 0;
}
