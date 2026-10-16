#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  int click = 0;
  while(n != m){
    if(m % 2 == 0) m /= 2;
    else m += 1;
    click++;
  }
  cout << click;
  return 0;
}
