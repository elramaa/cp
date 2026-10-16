#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  while(n--){
    string s; cin >> s;
    stack<char> st;
    bool yes = true;
    for(auto x: s){
      if(x == '[' || x == '(') st.push(x);
      else {
        if(st.empty()){
          yes = false;
          break;
        }
        if(x == ')'){
          char top = st.top();
          if(top != '('){
            yes = false;
            break;
          }
          st.pop();
        }else if(x == ']'){
          char top = st.top();
          if(top != '['){
            yes = false;
            break;
          }
          st.pop();
        }
      }
    }
    if(yes) cout << "ya\n";
    else cout << "tidak\n";
  }
  return 0;
}
