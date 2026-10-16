#include <bits/stdc++.h>
using namespace std;
using pi = pair<int, int>;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    pi a[n];
    for(int i = 0; i < n; ++i){
      cin >> a[i].first;
      a[i].second = i + 1;
    }
    sort(a, a+n);
    bool yes = true;
    for(int i = 0; i < n; ++i){
      int index = a[i].second;
      int a = index, b = i + 1;
      if(a < b) swap(a, b); 
      else if(a == b) continue;
      bool possible = false;
      while(a % 2 == 0){
        if(a / 2 == b){
          possible = true;
          break;
        }
        a /= 2;
      }
      if(!possible){
        yes = false;
        break;
      }
    }
    cout << (yes ? "YES": "NO") << "\n";
  }
  return 0;
}
