#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<int, int> counter;
    set<int> B;
    for (int i = 0; i < n*(n-1)/2; ++i) {
      int x;
      cin >> x;
      B.insert(x);
      counter[x]++;
    }
    auto it = B.begin();
    for(int i = 1; i <= n; ++i){
      cout << *it << " ";
      counter[*it] -= n-i;
      if(counter[*it] == 0 && it != --B.end()){
        it++;
      }
    }
    cout << "\n";
  }
  return 0;
}
