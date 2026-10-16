#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s){
  int n = s.size();
  for(int i = 0; i < n / 2; ++i){
    if(s[i] != s[n - 1 - i]) return false;
  }
  return true;
}

int main(){
  int n; cin >> n;
  while(n--){
    string s; cin >> s;
    if(is_palindrome(s)) cout << "palindrom\n";
    else cout << "bukan palindrom\n";
  }
  return 0;
}
