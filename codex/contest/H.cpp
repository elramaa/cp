#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, int l, int r, int left, int right, int c){
  int len = r - l + 1;
  int min_;
  c--;
  if(len % 2 == 1){
    int mid = (r + l) / 2;
    min_ = min(right - a[mid], a[mid] - left);
    if(c != 0 && l <= r){
      int twoMax = max(solve(a, l, mid-1, left, a[mid], c), solve(a, mid+1, r, a[mid], right, c));
      min_ = min(min_, twoMax);
    }
  }else{
    int mid1 = (r + l) / 2;
    int mid2 = mid1 + 1;
    int min1 = min(right - a[mid1], a[mid1] - left);
    int min2 = min(right - a[mid2], a[mid2] - left);
    if(min1 > min2){
      min_ = min1;
      if(c != 0 && l <= r){
        int twoMax = max(solve(a, l, mid1-1, left, a[mid1], c), solve(a, mid1+1, r, a[mid1], right, c));
        min_ = min(min_, twoMax);
      }
    }else{
      min_ = min2;
      if(c != 0 && l <= r){
        int twoMax = max(solve(a, l, mid2-1, left, a[mid2], c), solve(a, mid2+1, r, a[mid2], right, c));
        min_ = min(min_, twoMax);
      }
    }
  }
  return min_;
}

int main(){
  int n, c; cin >> n >> c;
  vector<int> a(n);
  for(int i = 0; i < n; ++i) cin >> a[i];
  sort(a.begin(), a.end());
  int ans = a[n-1] - a[0];
  if(c != 2) ans = solve(a, 1, n-2, a[0], a[n-1], c-2);
  cout << ans;
  return 0;
}
