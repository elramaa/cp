#include <bits/stdc++.h>
using namespace std;

int main(){
  int my_sum = 0;
  int twin_sum = 0;

  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i){
    cin >> a[i];
    twin_sum += a[i];
  }
  sort(a, a+n);

  int cnt = 0;
  for(int i = n-1; i >= 0; --i){
    my_sum += a[i];
    twin_sum -= a[i];
    cnt++;
    if(my_sum > twin_sum) break;
  }

  cout << cnt;
  return 0;
}
