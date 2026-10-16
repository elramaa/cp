#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  int a[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  // maybe we can use ... algorithm
  // find the longest continous number that if added can result in maximum t 

  int l = 0;
  int r = 0;
  int sum = 0;
  int max_cnt = 0;
  while(r < n){
    int cnt = 0;
    if(l > r) r = l;
    if(l == r){
      sum = a[l];
      if(sum > t){
        l++;
        sum = 0;
      }else{
        r++;
        cnt = 1;
      }
    }else if(sum + a[r] > t){
      sum -= a[l];
      l++;
    }else{
      sum += a[r];
      cnt = r - l + 1;
      r++;
    }
    max_cnt = max(max_cnt, cnt);
  }
  cout << max_cnt;
  return 0;
}
