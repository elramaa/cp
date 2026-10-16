#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> hCount(1e6 + 1, 0), aCount(1e6 + 1, 0);
  for(int i = 0; i < n; ++i){
    int h, a; cin >> h >> a;
    hCount[h]++; aCount[a]++;
  }
  int ans = 0;
  for(int i = 1; i <= 1e6; ++i){
    ans += hCount[i] * aCount[i];
  }
  cout << ans;
  return 0;
}
