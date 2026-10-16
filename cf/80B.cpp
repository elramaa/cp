#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  double hh = (double) (stoi(s.substr(0, 2)) % 12);
  double mm = stod(s.substr(3, 2));

  double hAngle = hh * ((double)360 / 12) + mm * (double)360 / 12 / 60;
  double mAngle = mm * ((double)360 / 60);
  cout << hAngle << " " << mAngle;
  return 0;
}
