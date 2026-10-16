#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  string s1, ss1, s2, ss2;
  cin >> s1 >> ss1 >> ss2;

  s2 = "";
  map<char, char> mark; // to-from 
  map<char, char> mark2; // from-to 
  bool confused = false;
  for(int i = 0; i < n; ++i){
    mark[ss1[i]] = s1[i];
    if(mark2.count(s1[i]) != 0 && ss1[i] != mark2[s1[i]]){
      confused = true;
      break;
    }
    mark2[s1[i]] = ss1[i];
  }

  if(confused){
    cout << "Pak Dengklek bingung";
  }else{
    for(int i = 0; i < n; ++i){
      if(mark.count(ss2[i]) != 0){
        s2 += mark[ss2[i]];
      }else{
        s2 += "?";
      }
    }
    cout << s2;
  }
  return 0;
}
