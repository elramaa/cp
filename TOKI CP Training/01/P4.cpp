#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.size();
  int side = round(sqrt(n));
  vector<string> contents(side);
  for(int i = 0; i < side; ++i){
    contents[i] = s.substr(i*side, side);
    if(i % 2 == 1){
      reverse(contents[i].begin(), contents[i].end());
    }
  }
  for(int i = 0; i < side; ++i){
    if(contents[i].size() == side) cout << contents[i];
    else{
      if(i % 2 == 1){
        for(int j = 0; j < side - contents[i].size(); ++j) cout << ".";
        cout << contents[i];
      }else{
        cout << contents[i];
        for(int j = 0; j < side - contents[i].size(); ++j) cout << ".";
      }
    }
    cout << "\n";
  }
  return 0;
}
