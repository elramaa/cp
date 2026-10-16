#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  string p1, p1_after, p2_after; cin >> p1 >> p1_after >> p2_after;
  map<char, char> letter_mapping;
  map<char, char> reverse_mapping;
  bool confused = false;
  for(int i = 0; i < n; ++i){
    if(letter_mapping.count(p1[i])){
      if(p1_after[i] != letter_mapping[p1[i]]){
        confused = true;
        break;
      }
    }
    if(reverse_mapping.count(p1_after[i])){
      if(p1[i] != reverse_mapping[p1_after[i]]){
        confused = true;
        break;
      }
    }
    letter_mapping[p1[i]] = p1_after[i];
    reverse_mapping[p1_after[i]] = p1[i];
  }
  if(confused) cout << "Pak Dengklek bingung";
  else {
    for(int i = 0; i < n; ++i){
      if(!reverse_mapping.count(p2_after[i])) cout << "?";
      else cout << reverse_mapping[p2_after[i]];
    }
  }
  return 0;
}
