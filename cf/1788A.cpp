#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    vector<int> countTwo(n+1, 0);
    for(int i = 1; i <= n; ++i){
      int x; cin >> x;
      if(x == 2) countTwo[i] = 1;
      countTwo[i] += countTwo[i-1];
    } 
    int k = -1;
    for(int i = 1; i <= n - 1; ++i){
      int left = countTwo[i];
      int right = countTwo[n] - left;
      if(left == right){
        k = i;
        break;
      }
    }
    cout << k << "\n";
  }
  return 0;
}
