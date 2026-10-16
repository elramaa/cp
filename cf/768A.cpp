#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  sort(a, a+n);
  int l = 1, r = n - 2;
  while(l <= r){
    if(a[l] == a[l-1]) ++l;
    else if(a[r] == a[r+1]) --r;
    else {
      cout << r - l  + 1;
      return 0;
    }
  }
  cout << 0;
  return 0;
}
