#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    multiset<int> S, T;
    for(int i = 0; i < n; ++i){
      int x;
      cin >> x;
      S.insert(x);
    }
    for(int i = 0; i < n; ++i){
      int x;
      cin >> x;
      T.insert(x);
    }
    int cnt = 0;
    for(auto x: T){
      int rem = x % k;
      if(S.count(rem) > 0){
        cnt++;
      }else if(S.count(k-rem) > 0){
        cnt++;
      }else if(S.count(rem-x) > 0){
        cnt++;
      }
    }
    for(auto x: S){
      int rem = x % k;
      if(T.count(rem) > 0){
        cnt++;
      }
    }
    if(cnt == n) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
