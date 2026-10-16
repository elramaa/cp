#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int best_sum = 0;
    int best_x;
    for(int x = 2; x <= n; ++x){
      int k = n/x;
      int sum = k*(k+1)/2 * x;
      if(sum > best_sum){
        best_sum = sum;
        best_x = x;
      }
      else break;
    }
    cout << best_x << "\n";
  }
  return 0;
}
