#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int even = 0;
  int odd = 0;
  for(int i = 0; i < n; ++i){
    int x; cin >> x;
    if(x % 2 == 0) even++;
    else odd++;
  }
  bool possible = true;
  int ans = 0;
  bool evenTurn = true; // start from even
  while(possible){
    if(evenTurn){
      if(even > 0){
        even--;
        ans++;
      }else if(odd > 1){
        odd -= 2;
        ans++;
      }else{
        possible = false;
      }
    }else{
      if(odd > 0){
        odd--;
        ans++;
      }else{
        possible = false;
      }
    }
    evenTurn = !evenTurn;
  }
  if(even > 0 || odd > 0) ans--;
  cout << ans;
  return 0;
}
