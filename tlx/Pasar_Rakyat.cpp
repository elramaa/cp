#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if(b == 0) return a;
  return gcd(b, a % b);
}

int main(){
  int n; cin >> n;
  int D[n]; 
  for(int i = 0; i < n; ++i){
    cin >> D[i];
  }
  int gcd_of_d = D[0];
  int lcm = D[0];
  for(int i = 1; i < n; ++i){
    gcd_of_d = gcd(lcm, D[i]);
    lcm = D[i] * lcm / gcd_of_d;
  }
  cout << lcm;
  return 0;
}
