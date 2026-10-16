#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    string S[n];
    for(int i = 0; i < n; ++i) cin >> S[i];
    int x2 = x*2;
    int cost = 0;
    for(auto s: S){
      for(int i = 0; i < m;){
        if(s[i] == '*'){
          ++i;
        }else if(s[i] == '.'){
          if(s[i+1] == '.' && i+1 < m){
            if(x2 < y) cost += x2; 
            else cost += y;
            i += 2;
          }else{
            cost += x;
            ++i;
          }
        }
      }
    }
    cout << cost << "\n";
  }
  return 0;
}
