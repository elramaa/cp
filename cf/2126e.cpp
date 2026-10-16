#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int P[n], S[n];
    map<int, int> counters;
    bool yes = false;
    for(int i = 0; i < n; ++i){
      cin >> P[i];
      counters[P[i]]++;
      if(counters[P[i]] >= 2) yes = true;
    }
    for(int i = 0; i < n; ++i){
      cin >> S[i];
      counters[S[i]]++;
      if(counters[S[i]] >= 2) yes = true;
    }
    if(yes) cout << "YES";
    else cout << "NO";
    cout << "\n";
  }
  return 0;
}
