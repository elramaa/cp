#include <bits/stdc++.h>
using namespace std;

void f(int a[], int ans[], int l, int r, int d){
  // find max position
  if(l > r) return;
  int max_ = 0;
  int max_index = -1;
  for(int i = l; i <= r; ++i){
    if(a[i] > max_){
      max_index = i;
      max_= a[i];
    }
  }
  ans[max_index] = d;
  f(a, ans, l, max_index-1, d+1);
  f(a, ans, max_index+1, r, d+1);
}

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int a[n];
    int ans[n];
    for(int i = 0; i < n; ++i){
      cin >> a[i];
    } 
    f(a, ans, 0, n-1, 0);
    for(auto x: ans) cout << x << " ";
    cout << "\n";
  }
  return 0;
}
