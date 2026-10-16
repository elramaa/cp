#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int A[n];
  for(int i = 0; i < n; ++i) cin >> A[i];
  int ans = 0;
  for(int i = 0; i < n - 1; ++i){
    int minIndex = i;
    for(int j = i + 1; j < n; ++j){
      if(A[j] < A[minIndex]){
        minIndex = j;
      }
    }
    if(minIndex != i){
      swap(A[i], A[minIndex]);
      ans++;
    }
  }
  cout << ans;
  return 0;
}
