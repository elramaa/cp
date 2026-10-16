#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, h;
  cin >> n >> h;
  vector<int> J(n);
  for(int i = 0; i < n; ++i){
    cin >> J[i];
  }
  sort(J.begin(), J.end());
  int sum = J[n-1];
  h -= J[n-1];
  int lower = lower_bound(J.begin(), J.end(), h) - J.begin();
  if(J[lower] < h) sum += J[lower+1];
  else sum += J[lower];
  cout << sum;
  return 0;
}
