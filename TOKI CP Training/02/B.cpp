#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  map<int, int> factor;
  for(int i = 2; i*i <= n; ++i){
    while(n % i == 0){
      factor[i]++;
      n /= i;
    }
  }
  if(n > 1) factor[n]++;
  for(auto it = factor.begin(); it != factor.end(); ++it){
    cout << it->first; 
    if(it->second > 1) cout << "^" << it->second;
    if(it != --factor.end()){
      cout << " x ";
    }
  }
  return 0;
}
