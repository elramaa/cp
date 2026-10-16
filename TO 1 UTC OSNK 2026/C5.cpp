#include <bits/stdc++.h>
using namespace std;

int berkah(int x){
  if(x == 0) return x;
  if(x % 10 == 0) return berkah(x / 10);
  return 1 + berkah(x - 1);
}

int hadiah(int x, int y){
  int ret = 0;
  for(int i = 1; i <= x; ++i){
    if(berkah(i) == y) ret++;
  }
  return ret;
}

int gebyar(int x){
  int maks = 0;
  int ret = 0;
  for(int i = 1; i <= x; ++i){
    int cur = hadiah(x, i);
    if(cur > maks){
      maks = cur;
      ret = i;
    }
  }
  return ret;
}

int main(){
  cout << gebyar(1000000000);
  return 0;
}
