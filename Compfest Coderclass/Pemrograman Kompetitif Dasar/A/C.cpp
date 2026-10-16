#include <bits/stdc++.h>
using namespace std;

int main(){
  int q; cin >> q;
  deque<string> deq;
  while(q--){
    int op; cin >> op;
    string x;
    if(op == 1){
      cin >> x;
      deq.push_front(x);
    }else if(op == 2){
      cin >> x;
      deq.push_back(x);
    }else if(op == 3){
      x = deq.front();
      cout << x << "\n";
      deq.pop_front();
    }else if(op == 4){
      x = deq.back();
      cout << x << "\n";
      deq.pop_back();
    }
  }
  return 0;
}
