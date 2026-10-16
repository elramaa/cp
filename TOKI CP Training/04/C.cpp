#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solutions;
vector<int> temp;
vector<bool> chosen;

void permutate(int n) {
  if (temp.size() == n) {
    solutions.push_back(temp);
    return;
  }
  for(int i = 1; i <= n; ++i){
    if(chosen[i]) continue;

    int sz = temp.size();
    if(sz >= 2){
      if(i > temp[sz-1] && temp[sz-1] > temp[sz-2] || i < temp[sz-1] && temp[sz-1] < temp[sz-2]){
        continue;
      }
    }

    temp.push_back(i);
    chosen[i] = true;
    permutate(n);
    temp.pop_back();
    chosen[i] = false;
  }
}

int main() {
  int n;
  cin >> n;
  chosen.resize(n+1);
  fill_n(chosen.begin(), n+1, false);
  permutate(n);
  for(auto sol : solutions){
    for(auto x : sol){
      cout << x;
    }
    cout << "\n";
  }
  return 0;
}
