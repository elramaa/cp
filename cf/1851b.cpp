#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int A[n];
    vector<int> Even, Odd;
    for(int i = 0; i < n; ++i){
      cin >> A[i];
      if(A[i] % 2 == 0) Even.push_back(A[i]);
      else Odd.push_back(A[i]);
    }
    sort(Even.begin(), Even.end());
    sort(Odd.begin(), Odd.end());
    for(int i = 0, j = 0, k = 0; i < n; ++i){
      if(A[i] % 2 == 0) A[i] = Even[j++];
      else A[i] = Odd[k++];
    }
    bool invalid = false;
    for(int i = 1; i < n; ++i){
      if(A[i] < A[i-1]){
        invalid = true;
        break;
      }
    }
    if(invalid) cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}
