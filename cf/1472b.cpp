#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int A[n];
    int sum = 0;
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < n; ++i) {
      cin >> A[i];
      sum += A[i];
      if(A[i] == 1) c1++;
      if(A[i] == 2) c2++;
    }
    if(sum % 2 == 0){
      if((c1 % 2 == 0 && c2 % 2 == 0) || (c1 > 0 && c1 % 2 == 0 && c2 % 2 != 0)) cout << "YES\n";
      else cout << "NO\n";
    }else{
      cout << "NO\n";
    }
  }
  return 0;
}
