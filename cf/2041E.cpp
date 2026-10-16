#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b; cin >> a >> b;
  vector<int> vecAns{b, b};
  vecAns.push_back(a * 3 - b * 2);
  sort(vecAns.begin(), vecAns.end());
  cout << "3\n";
  for(auto x: vecAns) cout << x << " ";
  return 0;
}
