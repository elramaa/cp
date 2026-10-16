#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  int sz = s.size();
  int n = ceil(sqrt(sz));
  for(int i = 0; i < n; ++i){
    if(i % 2 == 0){
      for(int j = 0; j < n; ++j){
        if(i * n + j < sz) cout << s[i * n + j];
        else cout << '.';
      }
    }else{
      for(int j = n-1; j >= 0; --j){
        if(i * n + j < sz) cout << s[i * n + j];
        else cout << '.';
      }
    }
    cout << "\n";
  }
  return 0;
}
