#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int u[n], v[n];
  int max_time = 0;
  for(int i = 0; i < n; ++i){
    cin >> u[i] >> v[i];
    max_time = max(abs(v[i] - u[i]), max_time);
  } 
  int cnt = 0;
  while(max_time--){
    for(int i = 0; i < n; ++i){
      if(u[i] == v[i]) continue;
      else if(u[i] < v[i]){
        u[i]++;
      }
    }
  }
  cout << cnt;
  return 0;
}
