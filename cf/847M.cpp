#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  bool arithmetic = true;
  int diff = a[1] - a[0];
  for(int i = 1; i < n - 1; ++i){
    if(a[i+1] - a[i] != diff){
      arithmetic = false;
      break;
    }
  }
  cout << (arithmetic ? a[n-1] + diff : a[n-1]);
  return 0;
}
