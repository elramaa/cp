#include <bits/stdc++.h>
using namespace std;

int main(){
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  // int x = abs(x1-x2);
  // int y = abs(y1-y2);
  int x = x2 - x1;
  int y = y2 - y1;
  if(x != 0 && y != 0 && abs(x) != abs(y)){
    cout << -1;
  }else{
    if(abs(x) == abs(y)){
      cout << x1 + x << " ";
      cout << y1 << " ";
      cout << x1 << " ";
      cout << y1 + y;
    }else if(x != 0){
      cout << x1 << " ";
      cout << y1 + x << " ";
      cout << x1 + x << " ";
      cout << y1 + x;
    }else if(y != 0){
      cout << x1 + y << " ";
      cout << y1 << " ";
      cout << x1 + y << " ";
      cout << y1 + y;
    }
  }
  return 0;
}
