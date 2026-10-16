#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, l; cin >> n >> l;
  int b[n+1]; b[0] = 0;
  // pair<int, int> h[l];
  int h[l];
  for(int i = 1; i <= n; ++i){
    int x; cin >> x;
    b[i] = b[i-1] + x;
  }
  for(int i = 0; i < l; ++i){
    int d, m; cin >> d >> m;
    h[i] = b[m-1] + d;
  }

  bool isthere = false;
  for(int i = 0; i < l - 1; ++i){
    if(h[i+1] - h[i] == 2){
      isthere = true;
      break;
    }
  }

  if(isthere) cout << "YA";
  else cout << "TIDAK";
  return 0;
}
