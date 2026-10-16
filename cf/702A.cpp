#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  int max_len = 1;
  int cur_len = 1;
  for(int i = 1; i < n; ++i){
    if(a[i-1] < a[i]){
      cur_len++;
    }else{
      cur_len = 1;
    }
    max_len = max(max_len, cur_len);
  }
  cout << max_len;
  return 0;
}
