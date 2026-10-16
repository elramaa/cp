#include <bits/stdc++.h>
using namespace std;

int debug_var;

void tanma(int &x, int y, int mod){
  x = (x + y) % mod;
}

int pana(int N, int cur, int target, int limit, int mod){
  if(N == 0){
    if(cur == target) return 1;
    return 0;
  }
  int ret = 0;
  for(int i = 0; i < (1 << limit); i++){
    // if(N == 1) cout << i << ": " << (cur & i) << "\n";
    // if((cur & i) == target) cout << i << "\n";
    tanma(ret, pana(N - 1, cur & i, target, limit, mod), mod);
    // cout << ret;
    // if(i == 31 && N == 1) cout << (cur & i) << "\n";
  }
  return ret;
  // return -1;
}

int main(){
  // cout << pana(2, 31, 0, 5, 2025);
  // cout << pana(2, 2025, 2025, 30, 10);
  // cout << pana(1, 5 + 8, 5, 10, 2025);
  cout << pana(2, 1023, 5, 10, 2025);
  // cout << pana(1, 27, 27, 10, 10);
  // for(int i = 0; i < pow(2, 32); ++i){
  //   cout << i << "\n";
  // }
  return 0;
}
