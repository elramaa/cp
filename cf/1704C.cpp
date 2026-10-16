#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;
    int a[m]; 
    for(int i = 0; i < m; ++i) cin >> a[i];
    sort(a, a+m);
    int dist[m];
    dist[0] = n - a[m-1] + a[0] - 1; 
    for(int i = 0; i < m - 1; ++i){
      dist[i+1] = a[i+1] - a[i] - 1;
    }
    sort(dist, dist+m);
    int safe = 0;
    for(int i = m-1; i >= 0; --i){
      dist[i] -= 4 * (m - 1 - i);
      if(dist[i] <= 0) break;
      if(dist[i] <= 2) safe++;
      else safe += dist[i] - 1;
    }
    cout << n - safe << "\n";
  }
  return 0;
}
