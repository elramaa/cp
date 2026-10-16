#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  int x = 2;
  while(x % a == 0 || x % b == 0 || x % c == 0) x++;
  cout << x;
  return 0;
}
