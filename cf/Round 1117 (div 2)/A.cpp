#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;
    set<char> letters;
    while(n--){
      string w; cin >> w;
      letters.insert(toupper(w[0]));
    }
    bool yes = true;
    while(m--){
      string a; cin >> a;
      for(auto c: a){
        if(letters.count(c) == 0) yes = false;
      }
    }
    if(yes) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
