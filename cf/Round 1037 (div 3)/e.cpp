#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    bool no = false;
    vector<int> P(n+1, INT32_MAX);
    for(int i = 1; i <= n; ++i){
      cin >> P[i];
      if(P[i] > P[i-1]) no = true;
    }
    vector<int> S(n+1, INT32_MIN);
    for(int i = 1; i <= n; ++i){
      cin >> S[i];
      if(max(S[i], P[i]) % min(S[i], P[i]) != 0) no = true;
      if(S[i] < S[i-1]) no = true;
    }
    if(no){
      cout << "NO\n";
      continue;
    }else{
      cout << "YES\n";
    }
  }
  return 0;
}
