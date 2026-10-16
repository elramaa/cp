#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    vector<vi> nums(n+1, vector<int>{});
    for(int i = 0; i < n; ++i){
      int x; cin >> x;
      nums[x].push_back(i);
    }
    int min_ = INT32_MAX;
    for(int i = 1; i <= n; ++i){
      for(int j = 0; j < (int)nums[i].size() - 1; ++j){
        min_ = min(nums[i][j+1] - nums[i][j] + 1, min_);
      }
    }
    cout << (min_ != INT32_MAX ? min_ : -1) << "\n";
  }
  return 0;
}
