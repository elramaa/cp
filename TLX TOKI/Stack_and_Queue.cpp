#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(){
  int n;
  cin >> n;
  deque<int> Q;
  while(n--){
    string s;
    cin >> s;
    if(s == "push_back"){
      int x;
      cin >> x;
      Q.push_back(x);
    }else if(s == "push_front"){
      int x;
      cin >> x;
      Q.push_front(x);
    }
    else if(s == "pop_back") Q.pop_back();
    else if(s == "pop_front") Q.pop_front();
  }
  for(auto x: Q){
    cout << x << "\n";
  }
  return 0;
}
