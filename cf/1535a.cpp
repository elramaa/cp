#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    vector<int> S(4);
    for(int i = 0; i < 4; ++i) cin >> S[i];
    int w1 = max(S[0], S[1]);
    int w2 = max(S[2], S[3]);
    sort(S.begin(), S.end());
    if(max(w1, w2) == S[3] && min(w1, w2) == S[2]) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
