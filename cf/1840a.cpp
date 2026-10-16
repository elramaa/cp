#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    string s;
    cin >> n >> s;
    string a = "";
    char x = ' ';
    for(char c: s){
      if(x == ' '){
        x = c;
        a += c;
      }else if(x == c){
        x = ' ';
      }
    }
    cout << a << "\n";
  }
  return 0;
}
