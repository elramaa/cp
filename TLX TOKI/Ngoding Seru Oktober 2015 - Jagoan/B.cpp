#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int x;
    cin >> x;
    string s;
    cin >> s;
    int depth = 0;
    vector<string> senarai;
    for(int i = 0; i < s.size(); ++i){
      if(s[i] == '['){
        depth++;
        if(depth == x) senarai.push_back("[");
        else if(depth > x) senarai.back() += "[";
      }else if(s[i] == ']'){
        if(depth >= x) senarai.back() += "]";
        depth--;
      }else{
        if(depth >= x) senarai.back() += s[i];
      }
    }
    cout << senarai.size() << "\n";
    for(auto ss: senarai){
      cout << ss << "\n";
    }
  }
  return 0;
}
