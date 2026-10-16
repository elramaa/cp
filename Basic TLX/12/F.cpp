#include <bits/stdc++.h>
using namespace std;

int main(){
  string s, t;
  cin >> s >> t;
  while(s.find(t) != string::npos){
    int pos = s.find(t);
    s.replace(pos, t.size(), "");
  }
  cout << s;
  return 0;
}
