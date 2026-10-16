#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int rest = 0;
  char act = ' ';
  // act = "r" = REST, "c" = "CONTEST", g = "GYM"
  for(int i = 0; i < n; ++i){
    int a; cin >> a;
    if(a == 0){
      act = 'r';
      rest++;
    }else if(a == 1){
      if(act != 'c'){
        act = 'c';
      }else{
        act = 'r';
        rest++;
      }
    }else if(a == 2){
      if(act != 'g'){
        act = 'g';
      }else{
        act = 'r';
        rest++;
      }
    }else if(a == 3){
      if(act == 'g') act = 'c';
      else if(act == 'c') act = 'g';
    }
  }
  cout << rest;
  return 0;
}
