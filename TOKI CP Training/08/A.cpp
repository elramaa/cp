#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin >> q;
  vector<vector<int>> V(2, vector<int>{-1});
  while(q--){
    string s;
    cin >> s;
    if(s == "add"){
      int l, x, y;
      cin >> l >> x >> y;
      for(int i = 0; i < y; ++i) V[l].push_back(x);
    }else if(s == "new"){
      V.push_back(vector<int>{-1});
    }else if(s == "out"){
      int l, z;
      cin >> l >> z;
      cout << V[l][z] << "\n";
    }
  }
  return 0;
}
