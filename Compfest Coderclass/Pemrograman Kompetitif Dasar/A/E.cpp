#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  map<string, int> cnt;
  while(n--){
    string op; string name;
    cin >> op >> name;
    if(op == "DAFTAR"){
      cnt[name]++;
    }else if(op == "TANYA"){
      cout << cnt[name] << "\n";
    }
  }
  return 0;
}
