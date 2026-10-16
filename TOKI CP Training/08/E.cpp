#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q;
  cin >> n >> q;
  map<string, string> contacts;
  while(n--){
    string name, num;
    cin >> name >> num;
    contacts[name] = num;
  }
  while(q--){
    string name;
    cin >> name;
    if(contacts.count(name) != 0) cout << contacts[name] << "\n";
    else cout << "NIHIL\n";
  }
  return 0;
}
