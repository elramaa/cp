#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    int c0 = 0;
    int peak = 0;
    int skip = false;
    for(int i = 0; i < n; ++i){
      int w;
      cin >> w;
      if(skip){
        skip = false;
        continue;
      }
      if(w == 0) c0++;
      else c0 = 0;
      if(c0 == k){
        c0 = 0;
        peak++;
        skip = true;
      }
    }
    cout << peak << "\n";
  }
  return 0;
}
