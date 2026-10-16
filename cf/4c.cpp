#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  map<string, int> names;
  for(int i = 0; i < n; ++i){
    string name;
    cin >> name;
    if(++names[name] > 1){
      cout << name << names[name] - 1;
    }else{
      cout << "OK";
    }
    cout << "\n";
  }
  return 0;
}
