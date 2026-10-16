#include <bits/stdc++.h>
using namespace std;

int main(){
  int k; cin >> k;
  if(k > 36){
    cout << -1;
    return 0;
  }
  while(k > 0){
    if(k != 1){
      cout << 8;
    }else{
      cout << 6;
    }
    k -= 2;
  }
  return 0;
}
