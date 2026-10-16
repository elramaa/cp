#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s1, s2;
  cin >> n >> s1 >> s2;
  map<char, int> cnt;
  for(char c: s2) cnt[c]++;
  int ans = 0;
  for(char c: s1){
    if(c == 'G' && cnt['K'] > 0){
      cnt['K']--;
      ans++;
    }else if(c == 'B' && cnt['G'] > 0){
      cnt['G']--;
      ans++;
    }else if(c == 'K' && cnt['B'] > 0){
      cnt['B']--;
      ans++;
    }
  }
  cout << ans;
  return 0;
}
