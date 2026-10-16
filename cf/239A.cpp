#include <bits/stdc++.h>
using namespace std;

int main(){
  int y, k, n; cin >> y >> k >> n;
  int xLimit = n - y;
  bool yes = false;
  int initialX = ((y + k - 1) / k) * k - y;
  for(int x = initialX; x <= xLimit; x += k){
    if(x < 1) continue;
    yes = true;
    cout << x << " ";
  }
  if(!yes) cout << -1;
  return 0;
}
