#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, t; cin >> n >> t;
  int a[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  int len = 0;
  int sum = 0;
  for(int i = 0, j = -1; i < n; ){
    if(sum + a[j+1] <= t && j < n - 1){
      sum += a[++j];
    }else{
      sum -= a[i++];
    }
    len = max(j - i + 1, len);
  }
  cout << len;
  return 0;
}
