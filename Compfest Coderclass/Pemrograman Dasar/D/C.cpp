#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q; cin >> n >> q;
  string s; cin >> s;
  while(q--){
    int op, a, b;
    cin >> op >> a >> b;
    if(op == 1) swap(s[a-1], s[b-1]);
    else if(op == 2) reverse(s.begin() + a - 1, s.begin() + b);
  }
  cout << s;
  return 0;
}
