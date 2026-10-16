#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
vector<bool> added(9, false);
vector<vi> permutations;

void generate_permutations(int n, int k, vector<int> vec){
  if(vec.size() == n){
    permutations.push_back(vec);
    return;
  }
  for(int i = 1; i <= n; ++i){
    if(added[i]) continue;
    if(!vec.empty()){
      if(abs(i - vec.back()) > k){
        continue;
      }
    }
    vec.push_back(i);
    added[i] = true;
    generate_permutations(n, k, vec);
    vec.pop_back();
    added[i] = false;
  }
}

int main(){
  int n, k; cin >> n >> k;
  generate_permutations(n, k, {});
  for(auto v: permutations){
    for(auto x: v) cout << x << " ";
    cout << "\n";
  }
  return 0;
}
