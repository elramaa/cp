#include <bits/stdc++.h>
using namespace std;

int main(){
  int x = 0;
  vector<int> tubuh;
  int makan = 0;
  for(int i = 1; i <= 64; ++i){
    for(int j = makan + i; j > makan; j--){
      tubuh.push_back(j);
      // cout << j << " ";
    }
    makan += i;
    // cout << "\n";
  }
  reverse(tubuh.begin(), tubuh.end());
  cout << tubuh[8];
  return 0;
}
