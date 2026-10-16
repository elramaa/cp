#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k; cin >> n >> k;
  string s; cin >> s;
  vector<bool> used(n, false);
  stack<int> st;
  st.push(0);
  int included = 0;
  for(int i = 1; i < n; ++i){
    if(s[i] == ')'){
      used[st.top()] = true;
      used[i] = true;
      included += 2;
      st.pop();
    }else{
      st.push(i);
    }
    if(included == k) break;
  }
  for(int i = 0; i < n; ++i){
    if(used[i]) cout << s[i];
  }
  return 0;
}
