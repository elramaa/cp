#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  while(n--){
    string s; cin >> s;
    for(auto &c: s) c = tolower(c);
    if(s == "inf") cout << 0;
    else if(s == "0") cout << "inf";
    else if(s == "nan") cout << "NaN";
    else {
      double x = stod(s);
      double y = 1/x;
      cout << fixed << setprecision(6) << y;
    }
    cout << "\n";
  }
  return 0;
}
