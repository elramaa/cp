#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    int a[n];
    map<int, int> counter;
    for(int i = 0; i < n; ++i){
      cin >> a[i];
      counter[a[i]]++;
    } 
    sort(a, a+n);
    int ans = 0;
    ans += counter[k];
    for(int j = 0; j < k; ++j){
      if(counter[j] == 0){
        if(counter[k] > 0){
          counter[k--];
          continue;
        }
        ans++;
      } 
    }
    cout << ans << "\n";
  }
  return 0;
}
