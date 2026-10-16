#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int s[n];
    int zeros = 0;
    for(int i = 0; i < n; ++i){
      cin >> s[i];
      if(s[i] == 0) zeros++;
    } 
    if(zeros == 0){
      cout << "YES\n";
      for(int i = 0; i < n; ++i) cout << 'A';
    }else if(zeros == 1){
      cout << "NO";
    }else{
      int zeroFound = 0;
      cout << "YES\n";
      for(auto x: s){
        if(x == 0){
          zeroFound++;
          if(zeroFound == 1) cout << 'A';
          else cout << 'B';
        }else{
          cout << 'C';
        }
      }
    }
    cout << "\n";
  }
  return 0;
}
