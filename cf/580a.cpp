#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int A[n];
  for(int i = 0; i < n; ++i){
    cin >> A[i];
  }
  int best = 1;
  int len = 1;
  for(int i = 1; i < n; ++i){
    if(A[i] < A[i-1]){
      best = max(best, len);
      len = 1;
    }else{
      len++;
      best = max(best, len);
    }
  }
  cout << best;
  return 0;
}
