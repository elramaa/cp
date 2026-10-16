#include <bits/stdc++.h>
using namespace std;

int main(){
  int k, a;
  char c;
  cin >> k >> c >> a;
  for(int i = 1; i <= k; ++i){
    for(int j = 1; j <= k; ++j){
      if(i == j || i + j == k + 1) cout << a;
      else cout << c;
    }
    cout << "\n";
  }
  return 0;
}
