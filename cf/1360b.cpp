#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> S(n);
    for(int i = 0; i < n; ++i) cin >> S[i];
    sort(S.begin(), S.end());
    int best = INT32_MAX;
    for(int i = 1; i < n; ++i){
      best = min(best, S[i] - S[i-1]);
    }
    cout << best << "\n";
  }
  return 0;
}
