#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  vector<int> A(3);
  A[0] = a;
  A[1] = b;
  A[2] = c;
  sort(A.begin(), A.end());
  if(k == 1){
    for(int i = 0; i < 3; ++i) cout << A[i] << " ";
  }else if(k == 0){
    reverse(A.begin(), A.end());
    for(int i = 0; i < 3; ++i) cout << A[i] << " ";
  }
  return 0;
}
