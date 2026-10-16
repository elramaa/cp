#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, q;
  string s;
  cin >> n >> q >> s;
  while(q--){
    int x, a, b;
    cin >> x >> a >> b;
    if(x == 1) swap(s[a-1], s[b-1]);
    else if(x == 2){
      string ss = s.substr(a-1, b-a+1);
      reverse(ss.begin(), ss.end());
      s.replace(a-1, b-a+1, ss);
    };
  }
  cout << s;
  return 0;
}
