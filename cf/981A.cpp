#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  int n = s.size();
  bool isPalindrome = true;
  set<char> chars;
  for(auto c: s) chars.insert(c);
  for(int i = 0; i < n/2; ++i){
    if(s[i] != s[n-i-1]){
      isPalindrome = false;
      break;
    }
  }
  if(isPalindrome){
    if(chars.size() == 1) cout << 0;
    else cout << n - 1;
  }else{
    cout << n;
  }
  return 0;
}
