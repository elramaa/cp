#include <bits/stdc++.h>
using namespace std;

int main(){
  int s, n, d;
  cin >> s >> n >> d;
  cout << s << "\n";
  for(int i = 2; i <= n; ++i){
    s += d;
    cout << s << "\n";
  }
  return 0;
}
