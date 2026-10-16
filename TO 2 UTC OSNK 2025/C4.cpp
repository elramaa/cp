#include <bits/stdc++.h>
using namespace std;

int harga(int x){
  int tanma = 1, pana = x;
  while(tanma < pana){
    int u = (tanma + pana + 1) / 2;
    (u * u <= x) ? (tanma = u) : (pana = u - 1);
  }
  return tanma;
}

int penghargaan(int x){
  if(x == 1) return 0;
  return 1 + penghargaan(harga(x));
}

int main(){
  int sum = 0;
  for(int i = 1; i <= 10; ++i){
    int x = penghargaan(i);
    sum += x;
    cout << i << ": " << penghargaan(i) << "\n";
  }
  // cout << penghargaan(523);
  cout << sum;
  return 0;
}
