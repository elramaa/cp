#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int A[n];
  int step = INT32_MAX;
  for(int i = 0; i < n; ++i){
    cin >> A[i];
    step = min(abs(A[i]), step);
  }
  cout << step;
  return 0;
}
