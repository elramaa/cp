#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int x = floor(log2(n));
  if(pow(2,x) == n) cout << "ya";
  else cout << "bukan";
  return 0;
}
