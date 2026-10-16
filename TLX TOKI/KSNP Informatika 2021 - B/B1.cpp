#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if(b == 0) return a;
  return gcd(b, a % b);
}

int main(){
  int n, a, b;
  cin >> n >> a >> b;
  int s = a / gcd(a, b) * b;
  int x = s/a;
  int y = s/b;
  cout << x + y;
  return 0;
}
