#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, h;
  cin >> n >> h;
  vector<int> dipotong;
  int total = 0;
  for(int i = 0; i < n; ++i){
    int hx; cin >> hx;
    if(hx > h){
      total += hx - h;
      dipotong.push_back(i + 1);
    }
  }
  if(total == 0) cout << "TIDAK ADA";
  else {
    cout << total << "\n";
    for(auto x: dipotong) cout << x << " ";
  }
  return 0;
}
