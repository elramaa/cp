#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    set<int> s;
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      s.insert(a[i]);
    }
    if(s.size() <= 2 && s.count(-1) != 0 && s.count(0) == 0){
      cout << "YES\n";
    }else{
      cout << "NO\n";
    }
  }
  return 0;
}
