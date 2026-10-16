#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin >> q;
  vector<pair<int, int>> V;
  int sz = 0;
  while(q--){
    string s;
    cin >> s;
    if(s == "add"){
      int x, y;
      cin >> x >> y;
      V.push_back({x, y});
      sz += y;
      cout << sz << "\n";
    }else if(s == "del"){
      int y;
      cin >> y;
      sz -= y;
      cout << V.back().first << "\n";
      for(int i = V.size() - 1; i >= 0 && y > 0; --i){
        if(V[i].second <= y){
          y -= V[i].second;
          V.pop_back();
        }else{
          V[i].second -= y;
          y = 0;
        }
      }
    }else if(s == "adx"){
      int d;
      cin >> d;
      for(auto &x: V) x.first += d;
    }else if(s == "dex"){
      int d;
      cin >> d;
      for(auto &x: V) x.first -= d;
    }
  }
  return 0;
}
