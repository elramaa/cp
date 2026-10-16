#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a[n];
    int biggest_negative = INT32_MIN;
    int count_negative = 0;
    int ans = 0;
    for(int i = 0; i < n; ++i){
      cin >> a[i];
      if(a[i] == 0) ans++;
      else if(a[i] < 0){
        count_negative++;
        biggest_negative = max(biggest_negative, a[i]);
      }
    } 
    // always do 1 operation for 0
    // do (n+1) operation for -n
    // if negative number is odd, choose the biggest negative odd number and make it positive
    if(count_negative % 2 == 1) ans += (-biggest_negative + 1);
    cout << ans << "\n";
  }
  return 0;
}
