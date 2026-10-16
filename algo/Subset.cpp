#include <bits/stdc++.h>
using namespace std;

// vector<vector<int>> subsets;
set<vector<int>> subsets;
vector<int> temp{};

void generate_subsets(vector<int> V, int n = 0) {
  if(n == V.size()){
    subsets.insert(temp);
    return;
  }
  generate_subsets(V, n+1);
  temp.push_back(V[n]);
  generate_subsets(V, n+1);
  temp.pop_back();
}

int main() {
  // int V[] = {1, 2, 3};
  vector<int> V{1, 2, 3};
  generate_subsets(V);
  for(auto x: subsets){
    cout << "{ ";
    for(auto a: x){
      cout << a << " ";
    }
    cout << "}\n";
  }
  return 0;
}
