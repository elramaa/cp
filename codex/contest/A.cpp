#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int sqrtN = sqrt(n);
  if(sqrtN * sqrtN == n) cout << "YES";
  else cout << "NO";
  return 0;
}
