#include <bits/stdc++.h>
using namespace std;

int t(int n){
  if(n == 1) return 1;
  return 1 + t((n + 1) / 2) + t(n / 2);
}

int main(){
  int n; cin >> n;
  cout << t(n);
  return 0;
}
