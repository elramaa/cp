#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> X(n);
  for(int i = 0; i < n; ++i){
    cin >> X[i];
  }
  sort(X.begin(), X.end());

  int q;
  cin >> q;
  vector<int> M(q);
  for(int i = 0; i < q; ++i){
    cin >> M[i];
    cout << (upper_bound(X.begin(), X.end(), M[i]) - X.begin()) << "\n";
  }

  return 0;
}
