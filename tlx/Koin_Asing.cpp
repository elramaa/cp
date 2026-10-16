#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  int n = s.size();
  map<char, int> cnt;
  for(char c: s) cnt[c]++;
  for(int i = 0; i < n; ++i){
    if(cnt[s[i]] == 1){
      cout << i + 1;
      break;
    }
  }
  return 0;
}
