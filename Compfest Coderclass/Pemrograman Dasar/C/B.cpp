#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int z = x;
  int cnt = 0;
  do{
    z = (a * z + b) % c;
    cnt++;
  }while(z != x);
  cout << cnt;
  return 0;
}
