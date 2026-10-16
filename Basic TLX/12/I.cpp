#include <bits/stdc++.h>
using namespace std;

string parse(string s, int shift){
  for(int i = 0; i < s.size(); ++i){
    char c = s[i] - shift;
    if(c < 97) c += 26;
    s[i] = c;
  }
  return s;
}

int main(){
  string s = "epctxlvldtsdpxzrlvfcdfdtytmpcxlyqlle";
  for(int i = 1; i < 26; ++i){
    cout << parse(s, i) << "\n";
  }
  return 0;
}
