#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    vector<int> B(n);
    for(int i = 0; i < n; ++i){
      cin >> A[i];
    }
    for(int i = 0; i < n; ++i){
      cin >> B[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for(int i = 0; i < k; ++i){
      if(B[n-i-1] > A[i]){
        swap(A[i], B[n-i-1]);
      }
    }
    int sum = 0;
    for(int i = 0; i < n; ++i) sum += A[i];
    cout << sum << "\n";
  }
  return 0;
}
