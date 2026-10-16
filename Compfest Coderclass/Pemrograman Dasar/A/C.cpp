#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  int sum = a + b + c + d + e + f;
  double avg = (double)sum / 6;
  cout << fixed << setprecision(6) << avg;
  return 0;
}
