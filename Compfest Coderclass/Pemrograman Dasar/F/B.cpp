#include <bits/stdc++.h>
using namespace std;

int count_ways(int n, int m){
  if(n == 1 || m == 1) return 1;
  return count_ways(n-1, m) + count_ways(m-1, n);
}

int main(){
  int n, m; cin >> n >> m;
  cout << count_ways(n, m);
  return 0;
}
