#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
  str s;
  cin >> s;
  char last = ' ';
  for(int i = 0; i < s.size(); ){
    if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
      if(last != ' '){
        cout << " ";
        last = ' ';
      }
      i += 3;
    }else{
      cout << s[i];
      last = s[i];
      i++;
    }
  }
  return 0;
}
