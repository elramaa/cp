#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int tr = 0;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      int x; cin >> x;
      if(i == j) tr += x;
    }
  }
  cout << tr;
  return 0;
}
