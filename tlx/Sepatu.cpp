#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  int b[n], s[m];
  for(int i = 0; i < n; ++i) cin >> b[i];
  for(int i = 0; i < m; ++i) cin >> s[i];
  sort(b, b+n);
  sort(s, s+m);
  int i = 0, j = 0;
  int ans = 0;
  while(i < n && j < m){
    if(b[i] - s[j] == 0 || b[i] - s[j] == -1){
      i++; j++;
      ans++;
    }else{
      if(b[i] > s[j]){
        j++;
      }else{
        i++;
      }
    }
  }
  cout << ans;
  return 0;
}
