#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t; cin >> t;
  while(t--){
    ll a, b, c, M;
    cin >> a >> b >> c >> M;
    ll lcmAB = a / gcd(a, b) * b;
    ll lcmAC = a / gcd(a, c) * c;
    ll lcmBC = b / gcd(b, c) * c;
    ll lcmABC = lcmAB / gcd(lcmAB, c) * c;
    ll onlyA = (M / a) - (M / lcmAB) - (M / lcmAC) + (M / lcmABC); 
    ll onlyB = (M / b) - (M / lcmAB) - (M / lcmBC) + (M / lcmABC);
    ll onlyC = (M / c) - (M / lcmAC) - (M / lcmBC) + (M / lcmABC);
    ll onlyAB = (M / lcmAB) - (M / lcmABC);
    ll onlyAC = (M / lcmAC) - (M / lcmABC);
    ll onlyBC = (M / lcmBC) - (M / lcmABC);
    ll onlyABC = (M / lcmABC);

    ll ansA = onlyA * 6 + (onlyAB + onlyAC) * 3 + onlyABC * 2;
    ll ansB = onlyB * 6 + (onlyAB + onlyBC) * 3 + onlyABC * 2;
    ll ansC = onlyC * 6 + (onlyAC + onlyBC) * 3 + onlyABC * 2;
    cout << ansA << " " << ansB << " " << ansC << "\n";
  }
  return 0;
}
