#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a(n);
  vector<int> cnt(1e5 + 1, 0);
  vector<int> vs;
  for(int i = 0; i < n; ++i){
    cin >> a[i];
    if(cnt[a[i]] == 0) vs.push_back(a[i]);
    cnt[a[i]]++;
  } 
  sort(vs.rbegin(), vs.rend());

  bool conanWin = false;
  for(auto x: vs){
    if(cnt[x] % 2 == 1){
      conanWin = true;
      break;
    }
  }

  cout << (conanWin ? "Conan" : "Agasa");
  return 0;
}
