#include <bits/stdc++.h>
using namespace std;
using pi = pair<int, int>;

int main(){
  int n; cin >> n;
  int a[n];
  vector<int> cnt(1e5 + 1, 0);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
    cnt[a[i]]++;
  } 
  queue<int> q;
  for(int i = 1; i <= n; ++i){
    if(cnt[i] == 0) q.push(i);
  }
  for(auto x: a){
    if(cnt[x] > 1 || x > n){
      cout << q.front();
      q.pop();
      cnt[x]--;
    }else{
      cout << x;
    }
    cout << " ";
  }
  return 0;
}
