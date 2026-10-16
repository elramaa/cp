#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> h;
  int x;
  while(cin >> x){
    h.push_back(x);
  }
  cout << max(h.begin(), h.end()) - min(h.begin(), h.end());
  return 0;
}
