#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<int, int> counter;
    int s[n];
    for(int i = 0; i < n; ++i){
      cin >> s[i];
      counter[s[i]]++;
    }
    bool invalid = false;
    for(auto cnt: counter){
      if(cnt.second < 2){
        invalid = true;
        break;
      }
    }
    if(invalid){
      cout << -1;
    }else{
      for(int i = 0; i < n;){
        int cnt = counter[s[i]];
        cout << i + counter[s[i]] << " ";
        ++i;
        for(int j = 0; j < cnt - 1; ++j, ++i){
          cout << i << " ";
        }
      }
    }
    cout << "\n";
  }
  return 0;
}
