#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    map<int, int> nums;
    bool dups = false;
    for(int i = 0; i < n; ++i){
      int x;
      cin >> x;
      if(!nums.count(x)) nums[x] = 1;
      else{
        nums[x]++;
        dups = true;
      };
    }
    if(dups) cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}
