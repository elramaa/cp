#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  string a, b; cin >> a >> b;
  int cnt = 0;
  for(int i = 0; i < n; ++i){
    if(b[i] == a[i]) continue;
    if(i != 0){
      if(b[i-1] != a[i-1]) continue;
    }
    cnt++;
  }
  cout << cnt;
  return 0;
}
