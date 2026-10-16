#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> perms;
vector<bool> chosen(1e5, false);
vector<int> temp;

void perm(vector<int> v){
  if(temp.size() == v.size()){
    perms.push_back(temp);
    return;
  }
  for(int x = 0; x < v.size(); ++x){
    if(chosen[x]) continue;
    temp.push_back(v[x]);
    chosen[x] = true;
    perm(v);
    temp.pop_back();
    perm(v);
    chosen[x] = false;
  }
}

int main(){
  vector<int> V{1, 2, 3, 4};
  perm(V);
  for(auto perm: perms){
    for(auto x: perm){
      cout << x << " ";
    }
    cout << "\n";
  }
  return 0;
}
