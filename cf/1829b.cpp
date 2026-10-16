#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    bool A[n];
    int best = 0;
    int c = 0;
    for(int i = 0; i < n; ++i){
      cin >> A[i]; 
      if(A[i] == 0) best = max(++c, best);
      else c = 0;
    }
    cout << best << "\n";
  }
  return 0;
}
