#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int x[n], y[n];
  vector<int> home(1e5 + 1, 0);
  vector<int> away(1e5 + 1, 0);
  for(int i = 0; i < n; ++i){
    cin >> x[i] >> y[i];
    home[x[i]]++;
    away[y[i]]++;
  } 
  for(int i = 0; i < n; ++i){
    int h = n-1;
    h += home[y[i]];
    int a = (n-1) * 2 - h;
    cout << h << " " << a << "\n";
  }
  return 0;
}
