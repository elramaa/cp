#include <bits/stdc++.h>
using namespace std;
int a, b;

string func(int x, int y){
  if(x > y) return "";
  return to_string(x) + "\n" + func(a * x + b, y);
}

int main(){
  int x, y;
  cin >> a >> b >> x >> y;
  cout << func(x, y);
  return 0;
}
