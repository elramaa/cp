#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  int A[n], B[m];
  for(int i = 0; i < n; ++i) cin >> A[i];
  for(int i = 0; i < m; ++i) cin >> B[i];
  sort(A, A+n);
  sort(B, B+m);
  int cnt = 0;
  for(int i = 0, j = 0; i < n && j < m; ){
    if(B[j] - A[i] == 1 || B[j] == A[i]){
      i++;
      j++;
      cnt++;
    }else if(A[i] < B[j]){
      i++;
    }else if(A[i] > B[j]){
      j++;
    }
  }
  cout << cnt;
  return 0;
}
