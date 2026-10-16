#include <bits/stdc++.h>
using namespace std;

int main(){
  double multi = 1.000000011;
  double n, t; cin >> n >> t;
  double res = n * pow(multi, t);
  printf("%.6f", res);
  return 0;
}
