#include <bits/stdc++.h>
using namespace std;

int count_pattern(string x, string pattern){
  int count = 0;
  int in = 0;
  for(char c: x){
    if(c == pattern[in]){
      count++;
      in = (in + 1) % 3;
    }
  }
  return count;
}

int main() {
  string s;
  cin >> s;
  int count = 0;
  count = max({
    count_pattern(s, "OSN"),
    count_pattern(s, "ONS"),
    count_pattern(s, "SNO"),
    count_pattern(s, "SON"),
    count_pattern(s, "NSO"),
    count_pattern(s, "NOS"),
  });
  if(count >= 3){
    cout << count;
  }else{
    cout << -1;
  }
  return 0;
}
