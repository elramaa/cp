#include <bits/stdc++.h>
using namespace std;

int main(){
  set<int> A;
  A.insert(0);
  A.insert(1);
  A.insert(2);
  int prev = -1;
  int ans = -1;
  for(auto it = A.begin(); it != A.end(); ++it){
    // cout << *it << " ";
    if(*it - prev >= 2){
      ans = prev+1;
      break;
    }
    prev = *it;
  }
  if(ans == -1) ans = prev+1;
  cout << ans;

  return 0;
}
