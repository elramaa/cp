#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, m;
    string a, b;
    cin >> n >> m >> a >> b;
    int ans = 0;
    for(int i = 0, j = 0; i < m && j < n; ++i){
      if(b[i] == a[j]){
        ans++;
        j++;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
