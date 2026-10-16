#include <bits/stdc++.h>
using namespace std;

int main(){
  string a, b;
  cin >> a >> b;
  bool bisa = false;
  for(int i = 0; i < a.size(); ++i){
    string s = a;
    s.erase(i, 1);
    if(s == b){
      bisa = true;
      break;
    }
  }
  if(bisa) cout << "Tentu saja bisa!";
  else cout << "Wah, tidak bisa :(";
  return 0;
}
