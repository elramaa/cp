#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    ll sum = 0;
    int negCount = 0;
    int biggestNegative = INT32_MIN;
    bool hasZero = false;
    for(int i = 0; i < n; ++i){
      int a; cin >> a;
      if(a == 0) hasZero = true;
      if(a < 0){
        biggestNegative = max(a, biggestNegative);
        negCount++;
        sum += -a;
      }else sum += a;
    }
    if(negCount % 2 == 1 && !hasZero) sum += biggestNegative * 2;
    cout << sum << "\n";
  }
  return 0;
}
