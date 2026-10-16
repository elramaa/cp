#include <bits/stdc++.h>
using namespace std;

int pana(int x, int y){
  if(y == 0) return x;
  return pana(x-1, y-1);
}

int tanma(int x, int y){
  if(y == 0) return x;
  return tanma(pana(x, y), y - 1);
}

int main(){
  // cout << pana(2025, 2000);
  cout << tanma(2025, 63);
  return 0;
}
