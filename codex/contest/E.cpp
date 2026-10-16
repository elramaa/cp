#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  bool quddusTurn = true; 
  int q = 0, h = 0;
  int i = 0, j = n - 1; 
  while(i <= j){
    if(a[i] > a[j]){
      if(quddusTurn){
        q += a[i];
        quddusTurn = false;
      }else{
        h += a[i];
        quddusTurn = true;
      } 
      ++i;
    }else{
      if(quddusTurn){
        q += a[j];
        quddusTurn = false;
      }else{
        h += a[j];
        quddusTurn = true;
      } 
      --j;
    }
  }
  cout << q << " " << h;
  return 0;
}
