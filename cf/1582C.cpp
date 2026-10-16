#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; string s;
    cin >> n >> s;
    int minAns = INT32_MAX;
    for(char c = 'a'; c <= 'z'; ++c){
      int ans = 0;
      bool possible = true;
      for(int i = 0, j = n-1; i < j;){
        if(s[i] == s[j]){
          ++i, --j;
          continue;
        }else{
          if(s[i] == c) ++i, ++ans;
          else if(s[j] == c) --j, ++ans;
          else {
            possible = false;
            break;
          } 
        }
      }
      if(possible) minAns = min(ans, minAns);
    }
    cout << (minAns == INT32_MAX ? -1 : minAns) << "\n";
  }
  return 0;
}
