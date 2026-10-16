#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  int n = s.size();
  int max_len = 0;
  for(int len = n; len > 0; --len){
    for(int i = 0; i <= n - len; ++i){
      for(int j = i+1; j <= n - len; ++j){
        if(s.substr(i, len) == s.substr(j, len)){
          max_len = max(max_len, len);
        }
      }
    }
  }
  cout << max_len;
  return 0;
}
