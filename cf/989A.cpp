#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  bool yes = false;
  // possible permutation
  // ABC, ACB, BCA, BAC, CAB, CBA
  string possiblePermutation[] = {"ABC", "ACB", "BCA", "BAC", "CAB", "CBA"};
  for(int i = 0; i < (int)s.size() - 2; i++){
    for(auto p: possiblePermutation){
      if(s[i] == p[0] && s[i+1] == p[1] && s[i+2] == p[2]){
        yes = true;
        break;
      }
    }
    if(yes) break;
  }
  cout << (yes ? "Yes" : "No");
  return 0;
}
