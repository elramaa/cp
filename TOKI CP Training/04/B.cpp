#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solutions;
vector<int> temp;

void generate(int n, int k, int i = 1){
  if(temp.size() == k){
    solutions.push_back(temp);
    return;
  }
  for(int x = i; x <= n; ++x){
    temp.push_back(x);
    generate(n, k, x+1);
    temp.pop_back();
  }
}

int main(){
  int n, k;
  cin >> n >> k;
  generate(n, k);
  for(auto sol: solutions){
    for(auto x: sol){
      cout << x << " ";
    }
    cout << "\n";
  }
  return 0;
}
