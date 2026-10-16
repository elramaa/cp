#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, x;
  cin >> n >> x;
  int A[n];
  for(int i = 0; i < n; ++i) cin >> A[i];
  int prev = 0;
  bool used = false;
  for(int i = 0; i < n; ++i){
    if(i+1 == x) continue;
    if(A[i] == prev+1){
      prev = A[i];
    }else{
      if(used){
        cout << 0;
        return 0;
      }
      prev = A[x-1];
      used = true;
      if(A[i] == prev+1){
        prev = A[i];
      }else{
        cout << 0;
        return 0;
      }
    }
  }
  cout << 1;
  return 0;
}
