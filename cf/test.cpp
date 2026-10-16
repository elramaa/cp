#include <bits/stdc++.h>
using namespace std;

int main(){
  long x = pow(2, 31);
  long y = (long)pow(2, 63) - 1;
  long long z = (long long)pow(2, 63) - 1;
  cout << "x = " << x << "\n";
  cout << "y = " << y << "\n";
  cout << "z = " << z << "\n";
  z++;
  cout << "z after z++ = " << z << "\n";
  return 0;
}
