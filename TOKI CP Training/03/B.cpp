#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> A(n);
  for(int i = 0; i < n; ++i) cin >> A[i];
  sort(A.begin(), A.end());
  float med;
  if(n % 2 == 1){
    med = A[n/2];
  }else{
    med = float(A[n/2] + A[n/2-1])/2;
  }
  cout << fixed << setprecision(1) << med;
  return 0;
}
