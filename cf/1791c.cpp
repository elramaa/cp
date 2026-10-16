#include <bits/stdc++.h>
using namespace std;
using str = string;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    str s;
    cin >> s;
    int shortest = n;
    for(int i = 0; i < n/2; ++i){
      if(s[i] != s[n-i-1]) shortest -= 2;
      else break;
    }
    cout << shortest << "\n";
  }
  return 0;
}
