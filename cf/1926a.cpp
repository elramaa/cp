#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int a = 0;
    int b = 0;
    for(char c: s){
      if(c == 'A') a++;
      if(c == 'B') b++;
    }
    if(a > b) cout << 'A';
    else cout << 'B';
    cout << "\n";
  }
  return 0;
}
