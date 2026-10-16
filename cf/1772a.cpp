#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int a = stoi(s.substr(0));
    int b = stoi(s.substr(2));
    cout << a + b << "\n";
  }
  return 0;
}
