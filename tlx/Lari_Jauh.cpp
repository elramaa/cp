#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k; cin >> n >> k;
  int a[n], b[k];
  for(int i = 0; i < n; ++i) cin >> a[i];
  for(int i = 0; i < k; ++i) cin >> b[i];
  vector<int> presumA(n);
  presumA[0] = a[0];
  for(int i = 1; i < n; ++i) presumA[i] = a[i] + presumA[i-1];
  for(int x: b){
    int patok = upper_bound(presumA.begin(), presumA.end(), x) - presumA.begin();
    cout << patok << "\n";
  }
  return 0;
}
