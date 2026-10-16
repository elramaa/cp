#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin >> q;
  while(q--){
    int n;
    string s, t;
    cin >> n;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t) cout << "YES";
    else cout << "NO";
    cout << "\n";
  }
  return 0;
}
