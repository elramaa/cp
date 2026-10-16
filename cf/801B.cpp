#include <bits/stdc++.h>
using namespace std;

int main(){
  string x, y;
  cin >> x >> y;
  string z;
  for(int i = 0; i < x.size(); ++i){
    if(y[i] > x[i]){
      cout << -1;
      return 0;
    }else{
      z += y[i];
    }
  }
  cout << z;
  return 0;
}
