#include <bits/stdc++.h>
using namespace std;

int main(){
  int q; cin >> q;
  queue<string> qu;
  while(q--){
    int op; cin >> op;
    if(op == 1){
      string s; cin >> s;
      qu.push(s);
    }else if(op == 2){
      cout << qu.front() << "\n";
      qu.pop();
    }
  }
  return 0;
}
