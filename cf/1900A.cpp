#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    string s; cin >> s;
    int empty_cnt = 0;
    bool three_empty = false;
    int continous_empty = 0;
    for(char c: s){
      if(c == '.'){
        empty_cnt++;
        continous_empty++;
        if(continous_empty >= 3) three_empty = true;
      }else if(c == '#'){
        continous_empty = 0;
      }
    }
    if(three_empty) cout << 2 << "\n";
    else cout << empty_cnt << "\n";
  }
  return 0;
}
