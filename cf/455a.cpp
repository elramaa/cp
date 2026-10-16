#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  vector<int> A(n);
  map<int, int> counters;
  for(int i = 0; i < n; ++i){
    cin >> A[i];
    if(counters.count(A[i]) == 0) counters[A[i]] = 1;
    else counters[A[i]]++;
  }
  int p = 0;
  return 0;
}
